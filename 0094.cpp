//
// Created by ShengyunYu on 2019/6/10.
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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode* > stackTreeNode;
        vector<int> res;
        TreeNode* node = root;
        while (node != NULL || !stackTreeNode.empty()) {
            while (node != NULL) {
                stackTreeNode.push(node);
                node = node->left;
            }
            node = stackTreeNode.top();
            res.push_back(node->val);
            stackTreeNode.pop();
            node = node->right;
        }
        return res;
    }
};



int main() {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    PrintVector(s.inorderTraversal(root));
}