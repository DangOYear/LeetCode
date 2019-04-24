//
// Created by ShengyunYu on 2019/4/24.
//

#include "common.h"

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1)
            return false;
        int res = 1;
        int n = sqrt(num);
        for (int i = 2; i <= n; ++i) {
            if (num % i == 0)
                res += i + num / i;
        }
        return res == num;
    }
};

int main(){
    Solution s;
    //cout << s.checkPerfectNumber(99999997) << endl;
    for (int i = 1; i < 100000000; ++i) {
        if (s.checkPerfectNumber(i))
            cout << i << endl;
    }
}
