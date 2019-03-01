//
// Created by ShengyunYu on 2019/3/1.
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
    bool isUnivalTree(TreeNode* root) {
        dfs(root);
        if (value.size() == 1)
            return true;
        return false;
    }
    void dfs(TreeNode* root){
        if (root){
            value.insert(root->val);
            dfs(root->left);
            dfs(root->right);
        }

    }

private:
    set<int> value;
};

int main(){

}