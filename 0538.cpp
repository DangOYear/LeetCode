//
// Created by ShengyunYu on 2019/4/26.
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
    TreeNode* convertBST(TreeNode* root) {
        if (root){
            convertBST(root->right);
            sum += root->val;
            root->val = sum;
            convertBST(root->left);
        }
        return root;
    }

private:
    int sum;
};