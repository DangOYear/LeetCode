//
// Created by ShengyunYu on 2019/2/26.
//

#include "common.h"

class Solution {
public:
    bool isUgly(int num) {
        if (num <= 0) return false;
        while (num % 2 ==0){
            num /= 2;
        }
        while (num % 3 ==0){
            num /= 3;
        }
        while (num % 5 ==0){
            num /= 5;
        }
        return num == 1;
    }


};

int main(){
    Solution s;
    cout << s.isUgly(14);
}
