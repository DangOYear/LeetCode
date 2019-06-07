//
// Created by ShengyunYu on 2019/6/7.
//

#include "common.h"


class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> final = heights;
        int count = 0;
        sort(final.begin(), final.end());

        for (int i = 0; i < heights.size(); ++i) {
            if (final[i] != heights[i])
                count++;
        }
        return count;
    }
};


