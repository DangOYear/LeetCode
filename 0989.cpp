//
// Created by ShengyunYu on 2019/6/12.
//

#include "common.h"


class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> res;
        int n = A.size();
        while (--n >= 0 || K > 0) {
            if (n >= 0) {
                K += A[n];
            }
            res.push_back(K % 10);
            K /= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    Solution s;

    vector<int> A{1,2,0,0};
    int K = 34;
    PrintIntVector(s.addToArrayForm(A, K));

    vector<int> a{2,1,5};
    int k = 806;
    PrintIntVector(s.addToArrayForm(a, k));
}