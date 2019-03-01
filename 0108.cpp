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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return ToBST(0, nums.size() - 1, nums);
    }

    TreeNode* ToBST(int low, int high, vector<int>& nums){
        if (low > high){
            return NULL;
        }
        int mid = (low + high) / 2;
        TreeNode *node = new TreeNode(nums[mid]);
        node->left = ToBST(low, mid - 1, nums);
        node->right = ToBST(mid + 1, high, nums);
        return node;
    }

};

int main(){

}