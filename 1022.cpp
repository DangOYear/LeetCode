//
// Created by ShengyunYu on 2019/4/24.
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
    int sumRootToLeaf(TreeNode* root) {
        res = 0;
        if (!root)
            return res;
        dfs(root, 0);
        return res;
    }
    void dfs(TreeNode* root, int tSum){
        if (!(root->left) && !(root->right)){
            res += tSum * 2 + root->val;
        }
        if (root->left)
            dfs(root->left, tSum * 2 + root->val);
        if (root->right)
            dfs(root->right, tSum * 2 + root->val);
    }
private:
    int res;
};

