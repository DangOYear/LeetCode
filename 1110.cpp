//
// Created by ShengyunYu on 2019/7/18.
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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        if (root == NULL) return res;
        for (int x : to_delete) s.insert(x);

        TreeNode* first = solve(root);

        if (first != NULL)  res.push_back(root);
        return res;
    }

    TreeNode* solve(TreeNode* root) {
        if (root == NULL) return NULL;

        root->left = solve(root->left);
        root->right = solve(root->right);

        if (s.count(root->val) != 0) {
            if (root->left) res.push_back(root->left);
            if (root->right)    res.push_back(root->right);
            return NULL;
        }
        return root;
    }

private:
    set<int> s;
    vector<TreeNode*> res;

};


int main() {
    Solution solution;

}