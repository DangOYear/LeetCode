//
// Created by ShengyunYu on 2019/7/9.
//

#include "common.h"


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> temp;
        for (int i = 0; i < nums.size(); ++i) {
            if (temp.count(nums[i]) != 0)
                return nums[i];
            else
                temp.insert(nums[i]);
        }
        return -1;
    }
};

