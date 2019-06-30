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
    int findBottomLeftValue(TreeNode* root) {

        maxHeight = INT_MIN;
        dfs(root, 0);
        return res;
    }


    void dfs(TreeNode* root, int height) {
        if (root == NULL) return;
        if (height > maxHeight) {
            maxHeight = height;
            res = root->val;
        }

        if (root->left) {
            dfs(root->left, height + 1);
        }

        if (root->right){
            dfs(root->right, height + 1);
        }
    }

private:
    int maxHeight;
    int res;
};


