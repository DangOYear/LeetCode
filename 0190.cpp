
//
// Created by ShengyunYu on 2019/3/29.
//

#include "common.h"

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for (int i = 0; i < 32; ++i) {
            res <<= 1;
            if (n & 1)  res += 1;
            n >>= 1;
        }
        return res;
    }
};



int main(){
    Solution s;
    uint32_t n = 43261596;
    cout << s.reverseBits(n) << endl;

}