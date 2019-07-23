//
// Created by ShengyunYu on 2019/2/24.
//

#include "common.h"


class Solution {
public:
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        if (root == NULL)
            return new TreeNode(val);
        if (root->val < val) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }

        root->right = insertIntoMaxTree(root->right, val);
        return root;
    }
};


int main(){

}