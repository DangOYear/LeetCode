//
// Created by ShengyunYu on 2019/7/31.
//

#include "common.h"

class Solution {
public:
    int tribonacci(int n) {
        int res[4];
        res[0] = 0;
        res[1] = 1;
        res[2] = 1;
        for (int i = 3; i <= n; ++i) {
            res[i % 3] = res[(i - 1) % 3] + res[(i - 2) % 3] + res[(i - 3) % 3];
        }
        return res[n % 3];
    }
};

int main() {
    Solution solution;

    cout << solution.tribonacci(4) << endl;
    cout << solution.tribonacci(25) << endl;
}