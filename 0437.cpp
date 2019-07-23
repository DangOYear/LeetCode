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
    int pathSum(TreeNode* root, int sum) {
        if (root == NULL)
            return 0;

        return path(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }

    int path(TreeNode* root, int sum) {
        if (root == NULL)
            return 0;

        int res = 0;

        if (root->val == sum)
            res += 1;

        res += path(root->left, sum - root->val);
        res += path(root->right, sum - root->val);

        return res;
    }

};

