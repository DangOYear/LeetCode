//
// Created by ShengyunYu on 2019/10/4.
//

#include "common.h"


class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int res = 0;
        int start = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i-1] >= nums[i])  start = i;
            res = max(res, i - start + 1);
        }
        return res;
    }
};


int main() {
    vector<int> nums{2,2,2,2,2};
    Solution solution;

    cout << solution.findLengthOfLCIS(nums) << endl;
}