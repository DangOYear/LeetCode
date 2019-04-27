//
// Created by ShengyunYu on 2019/4/26.
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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* res = root;
        while (res){
            if (res->val == val) return res;
            else{
                if (res->val < val){
                    res = res->right;
                } else{
                    res = res->left;
                }
            }
        }
        return NULL;
    }
};