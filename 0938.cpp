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
    int rangeSumBST(TreeNode* root, int L, int R) {
        int res = 0;
        dfs(root, L , R, res);
        return res;
    }

    void dfs(TreeNode* root, int L, int R, int &res){
        if (root){
            if (root->val >= L && root->val <= R){
                res += root->val;
            }
            if (L < root->val)
                dfs(root->left, L, R, res);
            if (R > root->val)
                dfs(root->right, L, R, res);
        }
    }

};
