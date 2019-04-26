//
// Created by ShengyunYu on 2019/4/26.
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
    int findTilt(TreeNode* root) {
        dfs(root);
        return tilt;
    }

    int dfs(TreeNode *root){
        if (!root)
            return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        tilt += abs(left - right);
        return left + right + root->val;
    }

private:
    int tilt;
};