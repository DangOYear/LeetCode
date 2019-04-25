//
// Created by ShengyunYu on 2019/4/25.
//

#include "common.h"


class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for (int i = 0; i < A.size(); ++i) {
            A[i] = A[i] * A[i];
        }

        sort(A.begin(), A.end());
        return A;
    }
};


