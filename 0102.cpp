//
// Created by ShengyunYu on 2019/4/2.
//

#include "common.h"


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;
        queue<TreeNode* > q;
        q.push(root);
        while (!q.empty()){
            vector<int> level;
            for (int i = q.size(); i > 0 ; --i) {
                TreeNode* p = q.front();
                q.pop();
                level.push_back(p->val);
                if (p->left)    q.push(p->left);
                if (p->right)   q.push(p->right);
            }
            res.push_back(level);
        }
        return res;
    }
};