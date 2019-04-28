//
// Created by ShengyunYu on 2019/4/28.
//

#include "common.h"

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int inv[] = {1, 0};
        for (int i = 0; i < A.size(); ++i) {
            reverse(A[i].begin(), A[i].end());
            for (int j = 0; j < A[i].size(); ++j) {
                A[i][j] = inv[A[i][j]];
            }
        }
        return A;
    }
};

