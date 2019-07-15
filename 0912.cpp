//
// Created by ShengyunYu on 2019/7/15.
//

#include "common.h"

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int mark[100001];
        memset(mark, 0 , sizeof(mark));

        for (int i = 0; i < nums.size(); ++i) {
            ++mark[nums[i] + 50000];
        }
        int pos = 0;
        for (int j = 0; j <= 100000; ++j) {
            while (mark[j]--) {
                nums[pos++] = j - 50000;
            }
        }
        return nums;
    }
};