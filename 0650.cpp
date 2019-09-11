//
// Created by ShengyunYu on 2019/9/11.
//

#include "common.h"


class Solution {
public:
    int minSteps(int n) {
        int res = 0;
        int d = 2;

        while (n > 1) {
            while (n % d == 0) {
                res += d;
                n /= d;
            }
            ++d;
        }
        return res;
    }
};


int main() {
    Solution solution;
    int n = 3;
    cout << solution.minSteps(n) << endl;
}