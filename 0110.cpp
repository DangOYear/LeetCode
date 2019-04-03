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
        if (!root)  return true;
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        if (abs((left - right)) <= 1)
            return isBalanced(root->left) && isBalanced(root->right);
        else
            return false;
    }

    int getHeight(TreeNode* root){
        if (!root) return 0;
        return 1 + max(getHeight(root->left), getHeight(root->right));
    }
};

int main(){

}