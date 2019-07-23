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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> path;
        dfs(root, sum, path, res);
        return res;
    }

    void dfs(TreeNode* root, int sum, vector<int> path, vector<vector<int>>& res) {
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL) {
            if (sum - root->val == 0) {
                path.push_back(root->val);
                res.push_back(path);
            }
            return;
        }
        path.push_back(root->val);
        if (root->left) dfs(root->left, sum - root->val, path, res);
        if (root->right)    dfs(root->right, sum - root->val, path, res);
    }
};

