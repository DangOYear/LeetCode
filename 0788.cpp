//
// Created by ShengyunYu on 2019/7/13.
//

#include "common.h"

class Solution {
public:
    int rotatedDigits(int N) {
        int count = 0;
        for (int i = 1; i <= N; ++i) {
            if(judge(i))
                ++count;
        }
        return count;
    }

    bool judge(int num) {
        bool flag = false;
        while (num) {
            int n = num % 10;
            if (n == 3 || n == 4 || n == 7) return false;
            if (flag || n == 2 || n == 5 || n == 6 || n == 9) flag = true;
            num /= 10;
        }
        return flag;
    }
};

