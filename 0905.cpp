//
// Created by ShengyunYu on 2019/4/27.
//


#include "common.h"


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> even;
        vector<int> odd;
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] % 2 == 1)
                odd.push_back(A[i]);
            else
                even.push_back(A[i]);
        }
        for (int j = 0; j < even.size(); ++j) {
            A[j] = even[j];
        }

        for (int k = even.size(); k < even.size() + odd.size(); ++k) {
            A[k] = odd[k - even.size()];
        }
        return A;
    }


};