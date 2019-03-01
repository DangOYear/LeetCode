//
// Created by ShengyunYu on 2019/2/4.
//

#include <iostream>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    bool dfs(TreeNode* root, int tsum, int sum){
        if(!root) return false;
        tsum = tsum + root->val;
        if(!root->left && !root->right) return tsum == sum;
        return dfs(root->left, tsum, sum) || dfs(root->right, tsum, sum);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        return dfs(root, 0, sum);
    }
};


/*
      5
     / \
    4   8
   /   / \
  11  13  4
 /  \      \
7   2      1

*/

int main(){
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left;
}
