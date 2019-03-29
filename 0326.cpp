//
// Created by ShengyunYu on 2019/3/29.
//

#include "common.h"


class Solution {
public:
    bool isPowerOfThree(int n) {
        while (n % 3 == 0 && n > 1){
            n /= 3;
        }
        return n == 1;
    }
};




int main(){
    int num1 = 27;
    int num2 = 54;

    Solution s;
    cout << s.isPowerOfThree(1162261467) << endl;
    cout << s.isPowerOfThree(num2) << endl;
}