//
// Created by ShengyunYu on 2019/7/31.
//
#include "common.h"


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        sort(nums.begin(), nums.end());
        getSubsets(nums, 0, subset, res);
        return res;
    }

    void getSubsets(vector<int> nums, int pos, vector<int>& subset, vector<vector<int>>& res) {
        res.push_back(subset);
        for (int i = pos; i < nums.size(); ++i) {
            subset.push_back(nums[i]);
            getSubsets(nums, i + 1, subset, res);
            subset.pop_back();
        }
    }
};

int main() {
    vector<int> nums{1,2,3};
    Solution solution;
    PrintIntVectorVector(solution.subsets(nums));
}