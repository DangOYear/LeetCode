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
    vector<int> preorderTraversal(TreeNode* root) {
        if (!root)
            return {};
        vector<int> res;
        stack<TreeNode*> stackTreeNode;
        stackTreeNode.push(root);
        while (!stackTreeNode.empty()) {
            TreeNode* node = stackTreeNode.top();
            stackTreeNode.pop();
            res.push_back(node->val);
            if (node->right)
                stackTreeNode.push(node->right);
            if (node->left)
                stackTreeNode.push(node->left);
        }
        return res;
    }
};

int main() {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    PrintIntVector(s.preorderTraversal(root));
}
