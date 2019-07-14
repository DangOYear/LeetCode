//
// Created by ShengyunYu on 2019/7/14.
//

#include "common.h"

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numSet(nums.begin(), nums.end());
        int maxLen = 0;
        for (auto it = numSet.begin();  it != numSet.end(); ++it) {
            if (numSet.count((*it) - 1) == 0) {
                int num = *it;
                int tempLen = 0;

                while (numSet.count(num) == 1) {
                    ++num;
                    ++tempLen;
                }

                maxLen = max(maxLen, tempLen);
            }
        }

        return maxLen;


    }
};

