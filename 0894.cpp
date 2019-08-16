//
// Created by ShengyunYu on 2019/7/23.
//

#include "common.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int N) {
        if (cache.count(N) == 0) {
            vector<TreeNode*> temp;
            if (N == 1) {
                temp.push_back(new TreeNode(0));
            } else if (N % 2 == 1) {
                for (int i = 0; i < N; ++i) {
                    int j = N - 1 - i;
                    for (TreeNode *left : allPossibleFBT(i)) {
                        for (TreeNode *right : allPossibleFBT(j)) {
                            TreeNode* node = new TreeNode(0);
                            node->left = left;
                            node->right = right;
                            temp.push_back(node);
                        }
                    }
                }
            }
            cache[N] = temp;
        }
        return cache[N];
    }

private:
    map<int, vector<TreeNode*>> cache;
};