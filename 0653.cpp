//
// Created by ShengyunYu on 2019/4/27.
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
    bool findTarget(TreeNode* root, int k) {
        return find(root, k, nums);
    }

    bool find(TreeNode* root, int k, set<int> &nums){
        if (root == NULL)
            return false;
        if (nums.count(k - root->val))
            return true;
        nums.insert(root->val);
        return find(root->left, k, nums) || find(root->right, k, nums);
    }
private:
    set<int> nums;
};