//
// Created by ShengyunYu on 2019/9/13.
//

#include "common.h"


class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& A, int K) {
        int n = A.size();
        vector<int> dp(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            int maxNum = INT_MIN;

            for (int j = 1; j <= K && i - j >= 0; ++j) {
                maxNum = max(maxNum, A[i - j]);
                dp[i] = max(dp[i], dp[i - j] + maxNum * j);
            }
        }
        return dp[n];
    }
};


int main() {
    vector<int> A = {1,15,7,9,2,5,10};
    int K = 3;
    Solution solution;
    cout << solution.maxSumAfterPartitioning(A, K);
}