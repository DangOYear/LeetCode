//
// Created by ShengyunYu on 2019/7/15.
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        TreeNode* root = build(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
        return root;
    }


    TreeNode* build(vector<int> inorder, int i, int j, vector<int> postorder, int k, int l) {
        if (j < i)
            return NULL;
        if (j - i == 0)
            return new TreeNode(inorder[i]);

        TreeNode* root = new TreeNode(postorder[l]);

        int index = -1;
        for (int m = i; m <= j; ++m) {
            if (inorder[m] == postorder[l])
                index = m;
        }

        root->left = build(inorder, i, index - 1, postorder, k, k + index - 1 - i);
        root->right = build(inorder, index + 1, j, postorder, l - j + index , l - 1);


        return root;

    }
};