//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"

class Solution {
public:
    int findComplement(int num) {
        int n = num;
        int count = 0;
        while (num) {
            ++count;
            num /= 2;
        }
        //cout << count << endl;
        return pow(2, count) - 1 - n;
    }
};


int main(){
    Solution s;
    cout << s.findComplement(5) << endl;
}