//
// Created by ShengyunYu on 2019/3/3.
//

#include "common.h"


class Solution {
public:
    int countPrimes(int n) {
        int res = 0;
        for (int i = 2; i < n; ++i) {
            if (isPrime(i))
                ++res;
        }
        return res;
    }

    bool isPrime(int num){
        int n = sqrt(num);
        //if (num == 2) return true;
        for (int i = 2; i <= n; ++i) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
};


int  main(){

    Solution s;
    cout << s.countPrimes(2) << endl;
}