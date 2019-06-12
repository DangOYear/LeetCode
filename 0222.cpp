//
// Created by ShengyunYu on 2019/6/11.
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
    int countNodes(TreeNode* root) {
        if (root)
            return countNodes(root->left) + countNodes(root->right) + 1;
        else
            return 0;
    }
};

