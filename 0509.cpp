//
// Created by ShengyunYu on 2019/4/24.
//

#include "common.h"


class Solution {
public:
    int fib(int N) {
        if (N == 0)
            return 0;
        if (N == 1)
            return 1;
        int p = 0, q = 1;
        int res;
        p = 0;

        for (int i = 2; i <= N; ++i) {
            res = p + q;
            p = q;
            q = res;
        }
        return res;
    }
};

