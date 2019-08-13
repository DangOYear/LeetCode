//
// Created by ShengyunYu on 2019/5/4.
//

#include "common.h"


class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long a = 0; a * a <= c; ++a) {
            double b = sqrt(c - a * a);
            if (b == (int)b)
                return true;
        }
        return false;
    }
};


int main() {
    Solution solution;

}