//
// Created by ShengyunYu on 2019/4/1.
//

#include "common.h"


class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n){
            if (n & 1){
                ++count;
            }
            n >>= 1;
        }
        return count;

    }
};


int main(){
    Solution s;
    uint32_t n =
    cout << s.

}