//
// Created by ShengyunYu on 2019/7/13.
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
    vector<int> rightSideView(TreeNode* root) {

        vector<int> res;
        if (!root)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            for (int i = q.size() - 1; i >=0 ; --i) {
                TreeNode* p = q.front();
                q.pop();
                if (i == 0) res.push_back(p->val);
                if (p->left)    q.push(p->left);
                if (p->right)   q.push(p->right);
            }
        }
        return res;
    }
};