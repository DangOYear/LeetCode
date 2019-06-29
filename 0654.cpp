//
// Created by ShengyunYu on 2019/6/29.
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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.size() == 0)
            return NULL;
        TreeNode* root = build(nums, 0, nums.size() - 1);
        return root;
    }

    TreeNode* build(vector<int>& nums, int left, int right) {
        if (left > right)
            return NULL;
        int pos = -1;
        int maxNum = INT_MIN;
        for (int i = left; i <= right; ++i) {
            if (maxNum < nums[i]) {
                maxNum = nums[i];
                pos = i;
            }
        }
        TreeNode* root = new TreeNode(nums[pos]);
        root->left = build(nums, left, pos - 1);
        root->right = build(nums, pos + 1, right);
        return root;
    }
};


int main() {

}