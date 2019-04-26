//
// Created by ShengyunYu on 2019/4/26.
//

#import "common.h"

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int tsum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
        }
        for (int j = 0; j < nums.size(); ++j) {
            sum -= nums[j];
            if (tsum == sum)
                return j;
            tsum += nums[j];
        }
        return -1;
    }
};