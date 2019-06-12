//
// Created by ShengyunYu on 2019/6/12.
//

#include "common.h"


class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int MAX = INT_MIN;
        int MIN = INT_MAX;
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] < MIN)
                MIN = A[i];
            if (A[i] > MAX)
                MAX = A[i];
        }

        if (MAX - MIN <= 2 * K)
            return 0;
        else
            return MAX - MIN - 2 * K;
    }
};


int main() {
    Solution s;

    vector<int> v{0, 10};
    int K = 2;

    cout << s.smallestRangeI(v, K) << endl;
}