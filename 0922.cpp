//
// Created by ShengyunYu on 2019/4/25.
//

#include "common.h"


class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> res = A;
        int cur = 0;
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] % 2 == 0) {
                res[cur] = A[i];
                cur += 2;
            }
        }
        cur = 1;
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] % 2 == 1){
                res[cur] = A[i];
                cur += 2;
            }
        }
        return res;
    }
};