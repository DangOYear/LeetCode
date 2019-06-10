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
    TreeNode* bstToGst(TreeNode* root) {
        sum = 0;
        if (!root) return NULL;
        inOrder(root);
        inOrderMinus(root);
        return root;
    }


    void inOrderMinus(TreeNode* root) {
        if (root) {
            inOrderMinus(root->left);
            int temp = root->val;
            root->val = sum;
            sum -= temp;
            inOrderMinus(root->right);
        }
    }

    void inOrder(TreeNode* root) {
        if (root) {
            inOrder(root->left);
            sum += root->val;
            inOrder(root->right);
        }
    }

private:
    int sum;
};


void inOrder(TreeNode* root) {
    if (root) {
        inOrder(root->left);
        cout << root->val << " ";
        inOrder(root->right);
    }
}


int main() {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    Solution s;
    inOrder(s.bstToGst(root));
}

