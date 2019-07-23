//
// Created by ShengyunYu on 2019/7/23.
//

#include "common.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int distributeCoins(TreeNode* root) {
        res = 0;
        dfs(root);
        return res;
    }

    int dfs(TreeNode* node) {
        if (node == NULL) return 0;
        int L = dfs(node->left);
        int R = dfs(node->right);
        res += abs(L) + abs(R);
        return node->val + L + R - 1;
    }

private:
    int res;
};


int main() {

}