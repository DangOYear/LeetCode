//
// Created by ShengyunYu on 2019/9/19.
//

#include "common.h"

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxNum = INT_MIN;
        int res = 0;
        for (int i = 0; i < arr.size(); ++i) {
            maxNum = max(maxNum, arr[i]);
            if (maxNum == i) ++res;
        }
        return res;
    }
};

