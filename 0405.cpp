//
// Created by ShengyunYu on 2019/4/1.
//

#include "common.h"



class Solution {
public:
    string toHex(int num) {
        if (num == 0)
            return "0";
        unsigned n;
        string res = "";
        if (num >= 0) {
            n = num;
        } else {
            n = num + pow(2, 32);
        }

        while (n) {
            if (n % 16 <= 9) {
                res += to_string(n % 16);
            } else {
                res += 'a' + n % 16 - 10;
            }
            n /= 16;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};





int main(){
    Solution s;
    cout << s.toHex(26) << endl;
    cout << s.toHex(-1) << endl;
}