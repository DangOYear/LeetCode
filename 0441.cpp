//
// Created by ShengyunYu on 2019/5/5.
//

#include "common.h"

class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1;
        while (i <= floor(n * 2.0 / (i + 1))) {
            i++;
        }
        return i - 1;
    }
};


int main(){
    Solution s;
    cout << s.arrangeCoins(1804289383) << endl;
    cout << s.arrangeCoins(5) << endl;
}