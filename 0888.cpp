//
// Created by ShengyunYu on 2019/7/31.
//
#include "common.h"


class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int ASum = 0;
        int BSum = 0;
        for (int i = 0; i < A.size(); ++i) {
            ASum += A[i];
        }
        for (int j = 0; j < B.size(); ++j) {
            BSum += B[j];
        }

        int diff = (BSum - ASum) / 2;

        set<int> BSet(B.begin(), B.end());

        for (int k = 0; k < A.size(); ++k) {
            if (BSet.count(A[k] + diff) == 1)
                return {A[k], A[k] + diff};
        }
        return {};
    }
};


int main() {
    Solution solution;
    vector<int> A{1, 2, 5};
    vector<int> B{2, 4};
    PrintIntVector(solution.fairCandySwap(A, B));
}