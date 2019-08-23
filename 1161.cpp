//
// Created by ShengyunYu on 2019/8/21.
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
    int maxLevelSum(TreeNode* root) {
        int maxLevel = 0;
        int maxValue = INT_MIN;
        int level = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int temp = 0;
            for (int i = q.size() - 1; i >= 0; --i) {
                TreeNode* p = q.front();
                q.pop();
                temp += p->val;
                if (p->left)    q.push(p->left);
                if (p->right)   q.push(p->right);
            }
            level++;
            if (temp > maxValue) {
                maxValue = temp;
                maxLevel = level;
            }

        }
        return maxLevel;
    }
};
