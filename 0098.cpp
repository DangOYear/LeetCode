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
    bool isValidBST(TreeNode* root) {
        max = INT64_MIN;
        //cout << root->val << endl;
        stack<TreeNode* > stackTreeNode;
        TreeNode* node = root;
        while (node != NULL || !stackTreeNode.empty()) {
            while (node != NULL) {
                stackTreeNode.push(node);
                node = node->left;
            }
            node = stackTreeNode.top();
            if (node->val <= max)
                return false;
            max = node->val;
            stackTreeNode.pop();
            node = node->right;
        }
        return true;
    }


private:
    long long int max;
};


int main(){
    TreeNode *root = new TreeNode(0);
    Solution s;
    PrintBool(s.isValidBST(root));
}