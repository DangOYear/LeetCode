//
// Created by ShengyunYu on 2019/4/27.
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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> value;
        inOrderTravel(root, value);
        TreeNode *head = new TreeNode(0);
        TreeNode *p = head;
        for (int i = 0; i < value.size(); ++i) {
            p->right = new TreeNode(value[i]);
            p = p->right;
        }
        return head->right;
    }

    void inOrderTravel(TreeNode* root, vector<int> &value){
        if (root){
            inOrderTravel(root->left, value);
            value.push_back(root->val);
            inOrderTravel(root->right, value);
        }
    }
};