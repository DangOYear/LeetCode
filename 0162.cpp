//
// Created by ShengyunYu on 2019/8/26.
//
#include "common.h"


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() == 1)
            return 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i == 0 && nums[i] > nums[i + 1])
                return i;

            if (i == nums.size() - 1 && nums[i] > nums[i - 1])
                return i;

            if (nums[i] > nums[i + 1] && nums[i] > nums[i - 1])
                return i;
        }
        return 0;
    }
};


int main() {
    Solution solution;
    vector<int> nums{1, 2, 3, 1};
    cout << solution.findPeakElement(nums);
}