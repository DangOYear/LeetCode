//
// Created by ShengyunYu on 2019/4/25.
//

#include "common.h"


class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int count = 0;
        for (int i = L; i <= R; ++i) {
            if (isPrime(setBit(i)))
                ++count;
        }
        return count;
    }

    int setBit(int num){
        int count = 0;
        while (num){
            if (num % 2 == 1)
                ++count;
            num /= 2;
        }
        return count;
    }

    bool isPrime(int n){
        if (n == 1)
            return false;
        int num = sqrt(n);
        for (int i = 2; i <= num; ++i) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
};


