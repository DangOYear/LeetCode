//
// Created by ShengyunYu on 2019/6/11.
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
    int kthSmallest(TreeNode* root, int k) {
        count = k;
        inOrder(root);
        return num;
    }

    void inOrder(TreeNode* root) {
        if (root) {
            inOrder(root->left);
            count--;
            if (count == 0) {
                num = root->val;
                return;
            }
            inOrder(root->right);
        }
    }

private:
    int count;
    int num;
};


