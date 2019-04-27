//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"

class Solution {
public:
    int minMoves(vector<int>& nums) {
        if (nums.size() == 1)
            return 0;
        int minNum = nums[0];
        int res = 0;
        for (int i = 1; i < nums.size(); ++i) {
            minNum = min(minNum, nums[i]);
        }
        for (int j = 0; j < nums.size(); ++j) {
            res += nums[j] - minNum;
        }
        return res;
    }
};

