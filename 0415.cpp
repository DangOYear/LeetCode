//
// Created by ShengyunYu on 2019/6/12.
//
#include "common.h"



class Solution {
public:
    string addStrings(string num1, string num2) {

        int len1 = num1.length() - 1;
        int len2 = num2.length() - 1;
        int carry = 0;
        string res = "";
        while (len1 >= 0 || len2 >= 0 || carry != 0) {
            if (len1 >= 0)  carry += num1[len1--] - '0';
            if (len2 >= 0)  carry += num2[len2--] - '0';
            res = to_string(carry % 10) + res;
            carry /= 10;
        }
        return res;
    }
};


int main() {
    Solution s;
    string num1 = "0";
    string num2 = "0";
    cout << s.addStrings(num1, num2) << endl;
}