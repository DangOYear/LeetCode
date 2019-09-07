//
// Created by ShengyunYu on 2019/9/7.
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
    bool isCompleteTree(TreeNode* root) {
        if (root == NULL)
            return true;

        queue<TreeNode*> q;
        q.push(root);
        int count = 0;
        while (!q.empty()) {
            TreeNode *p = q.front();
            q.pop();

            if (count >= 1 && p != NULL)
                return false;

            if (p == NULL)
                ++count;

            if (p) {
                q.push(p->left);
                q.push(p->right);
            }
        }
        return true;
    }
};