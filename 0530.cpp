//
// Created by ShengyunYu on 2019/4/28.
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
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        int diff = INT_MAX;
        for (int i = 0; i < data.size() - 1; ++i) {
            diff = min(diff, data[i + 1] - data[i]);
        }
        return diff;
    }

    void dfs(TreeNode* root){
        if (root) {
            dfs(root->left);
            data.push_back(root->val);
            dfs(root->right);
        }
    }
private:
    vector<int> data;
};