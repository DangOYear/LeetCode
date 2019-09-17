//
// Created by ShengyunYu on 2019/9/17.
//

#include "common.h"

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        permuteDFS(res, nums, 0);
        return res;
    }

    void permuteDFS(vector<vector<int>> &res, vector<int>& nums, int start) {
        if (start == nums.size()) {
            res.push_back(nums);
        }

        for (int i = start; i < nums.size(); ++i) {
            if (i == start || nums[start] != nums[i]) {
                swap(nums[start], nums[i]);
                permuteDFS(res, nums, start + 1);
                swap(nums[i], nums[start]);
            }
        }
    }
};