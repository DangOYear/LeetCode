//
// Created by ShengyunYu on 2019/3/29.
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if (root)   dfs(root, "", res);
        return res;
    }

    void dfs(TreeNode* root, string path, vector<string>& res){
        if (!root->left && !root->right)    res.push_back(path + to_string(root->val));
        if (root->left) dfs(root->left, path + to_string(root->val) + "->", res);
        if (root->right) dfs(root->right, path + to_string(root->val) + "->", res);
    }
};


int main(){

}