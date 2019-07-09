//
// Created by ShengyunYu on 2019/7/9.
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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return build(0, preorder.size() - 1, preorder);

    }

    TreeNode* build(int left, int right, vector<int> preorder) {

        if (left > right)
            return NULL;
        TreeNode* root = new TreeNode(preorder[left]);
        if (left == right)
            return root;
        int mid = left;
        for (int i = left; i <= right; ++i) {
            if (preorder[i] < preorder[left]) {
                mid++;
            }
        }
        root->left = build(left + 1, mid, preorder);

        root->right = build(mid + 1, right, preorder);
        return root;
    }
};


int main() {
    Solution s;

}
