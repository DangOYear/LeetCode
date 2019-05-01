//
// Created by ShengyunYu on 2019/5/1.
//

#include "common.h"

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        return isIncreasing(A) || isDecreasing(A);
    }

    bool isIncreasing(vector<int> &A){
        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] > A[i + 1])
                return false;
        }
        return true;
    }

    bool isDecreasing(vector<int> &A){
        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] < A[i + 1])
                return false;
        }
        return true;
    }
};

