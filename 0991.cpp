//
// Created by ShengyunYu on 2019/7/9.
//

#include "common.h"

class Solution {
public:
    int brokenCalc(int X, int Y) {
        int res = 0;
        while (Y > X) {
            res++;
            if (Y % 2 == 1) {
                Y++;
            } else {
                Y /= 2;
            }
        }
        res += X - Y;
        return res;
    }
};