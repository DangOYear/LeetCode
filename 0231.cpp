//
// Created by ShengyunYu on 2019/3/29.
//
#include "common.h"


class Solution {
public:
    bool isPowerOfTwo(int n) {
        while (n % 2 == 0 && n > 1){
            n /= 2;
        }
        return n == 1;
    }
};


int main(){

}
