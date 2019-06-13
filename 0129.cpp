//
// Created by ShengyunYu on 2019/6/13.
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
    int sumNumbers(TreeNode* root) {
        int result = 0;
        if (root == NULL) return 0;
        calcul(root, 0, result);
        return result;
    }

    void calcul(TreeNode* root, int num, int &result) {
        int temp = num * 10 + root->val;
        if (root->left == NULL && root->right == NULL) {
            result += temp;
            return;
        }
        if (root->left != NULL) {
            calcul(root->left, temp, result);
        }

        if (root->right != NULL) {
            calcul(root->right, temp, result);
        }
    }
};


int main() {

}
