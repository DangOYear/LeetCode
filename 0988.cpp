//
// Created by ShengyunYu on 2019/9/8.
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
    string smallestFromLeaf(TreeNode* root) {

        dfs(root, "");
        return res;
    }


    void dfs(TreeNode* root, string temp) {
        if (root == NULL)
            return;
        temp += char(root->val + 'a');

        if (root->left == NULL && root->right == NULL) {
            reverse(temp.begin(), temp.end());

            if (temp < res)
                res = temp;

            reverse(temp.begin(), temp.end());
        }

        dfs(root->left, temp);
        dfs(root->right, temp);
        temp = temp.substr(0, temp.size() - 1);
    }

private:
    string res = "{";
};


