//
// Created by ShengyunYu on 2019/7/31.
//
#include "common.h"

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            nums[(nums[i] - 1) % n] += n;
        }
        for (int j = 0; j < n; ++j) {
            if (nums[j] > 2 * n)
                res.push_back(j + 1);
        }
        return res;
    }
};


int main() {
    vector<int> nums{4,3,2,7,8,2,3,1};
    Solution solution;
    PrintIntVector(solution.findDuplicates(nums));
}