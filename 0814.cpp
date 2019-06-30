//
// Created by ShengyunYu on 2019/6/30.
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
    TreeNode* pruneTree(TreeNode* root) {
        if (root == NULL) return NULL;


        if (NotfindOneInSubtree(root->left)) {
            root->left = NULL;
        } else{
            pruneTree(root->left);
        }

        if (NotfindOneInSubtree(root->right)) {
            root->right = NULL;
        } else{
            pruneTree(root->right);
        }
        return root;
    }


    bool NotfindOneInSubtree(TreeNode* root) {
        if (root == NULL)
            return true;
        else {
            if (root->val == 1) {
                return false;
            } else{
                if (root->left == NULL && root->right == NULL) {
                    return true;
                }
            }
        }

        return NotfindOneInSubtree(root->left) && NotfindOneInSubtree(root->right);
    }
};



int main() {

}