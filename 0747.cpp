//
// Created by ShengyunYu on 2019/5/2.
//

#include "common.h"

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxIndex = 0;
        //int maxNum = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[maxIndex])
                maxIndex = i;
        }
        for (int j = 0; j < nums.size(); ++j) {
            if (maxIndex != j && nums[maxIndex] < nums[j] * 2)
                return -1;
        }
        return maxIndex;
    }
};


