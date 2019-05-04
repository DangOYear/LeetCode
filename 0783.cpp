//
// Created by ShengyunYu on 2019/5/4.
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
    int minDiffInBST(TreeNode* root) {
        int res = INT_MAX;
        preOrder(root);
        sort(value.begin(), value.end());
        for (int i = 0; i < value.size() - 1; ++i) {
            res = min(res, value[i + 1] - value[i]);
        }
        return res;
    }

    void preOrder(TreeNode* root){
        if (root){
            preOrder(root->left);
            value.push_back(root->val);
            preOrder(root->right);
        }
    }

private:
    vector<int> value;
};