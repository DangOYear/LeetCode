//
// Created by ShengyunYu on 2019/4/27.
//

#import "common.h"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> value1, value2;
        dfs(root1, value1);
        dfs(root2, value2);
        return value1 == value2;
    }

    void dfs(TreeNode* root, vector<int> &value){
        if (!root)
            return;
        if (!root->left && !root->right)
            value.push_back(root->val);
        dfs(root->left, value);
        dfs(root->right, value);
    }

};
