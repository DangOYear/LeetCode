//
// Created by ShengyunYu on 2019/4/2.
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
    int minDepth(TreeNode* root) {
        if (!root)
            return 0;
        int min = INT_MAX;
        dfs(root, min, 1);
        return min;
    }

    void dfs(TreeNode* root, int &min, int level){
        if (!root)
            return;
        if (!(root->left) && !(root->right)){
            if (level < min){
                min = level;
            }
            return;
        }
        dfs(root->left, min, level + 1);
        dfs(root->right, min, level + 1);
    }
};


int main(){
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    /***root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    ***/
    Solution s;
    cout << s.minDepth(root) << endl;
}