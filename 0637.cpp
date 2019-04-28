//
// Created by ShengyunYu on 2019/4/28.
//


#include "common.h"


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if (!root)
            return res;
        queue<TreeNode* > q;
        q.push(root);
        while (!q.empty()){
            int n = q.size();
            double level = 0.0;
            for (int i = n; i > 0; --i) {
                TreeNode *p = q.front();
                q.pop();
                level += p->val;
                if (p->left)    q.push(p->left);
                if (p->right)   q.push(p->right);
            }
            res.push_back(level / n);
        }
        return res;
    }
};