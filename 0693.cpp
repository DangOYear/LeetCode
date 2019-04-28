//
// Created by ShengyunYu on 2019/4/28.
//


#include "common.h"


class Solution {
public:
    bool hasAlternatingBits(int n) {
        int cur = n % 2;
        n /= 2;
        while (n){
            if (n % 2 == cur) return false;
            cur = n % 2;
            n /= 2;
        }
        return true;
    }


};


