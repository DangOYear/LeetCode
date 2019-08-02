//
// Created by ShengyunYu on 2019/8/2.
//

#include "common.h"


class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        if (A.size() == 0) return 0;
        int zeroCount = 0;
        int oneCount = 0;

        int left = 0, right = 0, result = 0;

        while (right < A.size()) {
            if (A[right] == 1) oneCount++;
            else zeroCount++;

            while (oneCount + K < right - left + 1) {
                if (A[left]) --oneCount;
                else --zeroCount;
                ++left;
            }

            result = max(result, right - left + 1);
            ++right;
        }
        return result;
    }
};



