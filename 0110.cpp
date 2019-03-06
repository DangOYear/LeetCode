//
// Created by ShengyunYu on 2019/3/3.
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
    bool isBalanced(TreeNode* root) {
        if (!root）  return true;
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        return balanced(root)
    }

    int getHeight(TreeNode* root){

    }
};

int main(){

}