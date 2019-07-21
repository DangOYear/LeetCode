//
// Created by ShengyunYu on 2019/7/21.
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode* cur = NULL;
        TreeNode* pre = NULL;
        if (root == NULL)
            return res;
        s.push(root);
        while (!s.empty()) {
            cur = s.top();
            if ((cur->left == NULL && cur->right == NULL) || (pre != NULL && (pre == cur->left || pre == cur->right))) {
                res.push_back(cur->val);
                s.pop();
                pre = cur;
            } else{
                if (cur->right != NULL) s.push(cur->right);
                if (cur->left != NULL)  s.push(cur->left);
            }
        }
        return res;
    }
};

int main() {
    Solution solution;
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    PrintIntVector(solution.postorderTraversal(root));
}