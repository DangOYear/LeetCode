//
// Created by ShengyunYu on 2019/5/4.
//

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int len = 1;
        dfs(root);
        return len - 1;
    }

    int dfs(TreeNode* root){
        if (root == NULL)
            return 0;
        int L = dfs(root->left);
        int R = dfs(root->right);
        len = max(len, L + R + 1);
        return max(L, R) + 1;
    }

private:
    int len;
};