//
// Created by ShengyunYu on 2019/7/16.
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* root = build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
        return root;
    }

    TreeNode* build(vector<int>& preorder, int i, int j, vector<int>& inorder, int k, int l) {
        if (i > j)
            return NULL;
        if (i == j)
            return new TreeNode(preorder[i]);

        TreeNode* root = new TreeNode(preorder[i]);

        int index = -1;
        for (int m = k; m <= l; ++m) {
            if (inorder[m] == preorder[i])
                index = m;
        }

        root->left = build(preorder, i + 1, index - k + i, inorder, k, index - 1);
        root->right = build(preorder, index + j - l + 1, j, inorder, index + 1, l);
        return root;
    }
};

