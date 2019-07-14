//
// Created by ShengyunYu on 2019/6/11.
//

#include "common.h"


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (pos < 2 || nums[i] != nums[pos - 2]) {
                nums[pos] = nums[i];
                ++pos;
            }
        }
        return pos;
    }
};