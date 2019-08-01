//
// Created by ShengyunYu on 2019/7/31.
//

#include "common.h"

class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> res;
        int N = A.size();
        int pos;
        int i;
        for (pos = N; pos > 0; --pos) {
            for (i = 0; A[i] != pos; ++i);
            reverse(A.begin(), A.begin() + i + 1);

            //PrintIntVector(A);

            if (i != 0)
                res.push_back(i + 1);
            reverse(A.begin(), A.begin() + pos);
            res.push_back(pos);
        }
        return res;
    }
};


int main() {
    Solution solution;
    vector<int> A{3, 2, 4, 1};
    PrintIntVector(solution.pancakeSort(A));
}