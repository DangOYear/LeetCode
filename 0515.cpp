//
// Created by ShengyunYu on 2019/7/3.
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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        int levelMax = INT_MIN;
        if (!root) return res;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            levelMax = INT_MIN;
            for (int i = q.size() - 1; i >= 0; --i) {
                TreeNode* p = q.front();
                q.pop();
                levelMax = max(levelMax, p->val);
                if (p->left)    q.push(p->left);
                if (p->right)   q.push(p->right);
            }
            res.push_back(levelMax);
        }
        return res;
    }
};


