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
    int maxAncestorDiff(TreeNode* root) {
        if (root == NULL)
            return 0;
        res = INT_MIN;
        dfs(root, root->val, root->val);
        return res;

    }

    void dfs(TreeNode* root, int Max, int Min) {
        if (root == NULL)
            return;
        Max = max(Max, root->val);
        Min = min(Min, root->val);

        if (root->left == NULL && root->right == NULL) {
            res = max(res, abs(Max - Min));
            return;
        }
        dfs(root->left, Max, Min);
        dfs(root->right, Max, Min);
    }

private:
    int res;
};