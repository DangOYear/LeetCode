//
// Created by ShengyunYu on 2019/3/6.
//

#include "common.h"

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        int i = 3;
        int res = 0;
        int x = 1;
        int y = 2;
        while (i <= n){
            res = x + y;
            x = y;
            y = res;
            i++;
        }
        return res;
    }
};


int main(){
    Solution s;
    cout << s.climbStairs(45) << endl;
}