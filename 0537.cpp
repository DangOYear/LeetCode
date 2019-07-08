//
// Created by ShengyunYu on 2019/7/8.
//

#include "common.h"


class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        string res = "";
        int num1[2];
        int num2[2];
        int num3[2];
        getNum(num1, a);
        getNum(num2, b);

        num3[0] = num1[0] * num2[0] - num1[1] * num2[1];
        num3[1] = num1[0] * num2[1] + num1[1] * num2[0];

        res += to_string(num3[0]);
        res += "+";
        res += to_string(num3[1]);
        res += "i";

        return res;

    }

    void getNum(int num[], string str) {
        int  index = str.find("+");
        string num1 = str.substr(0, index);
        num[0] = stoi(num1);
        string num2 = str.substr(index + 1, str.length() - index);
        num[1] = stoi(num2);
    }


};


int main() {
    Solution s;
    string s1 = "1+-1i";
    string s2 = "1+-1i";
    cout << s.complexNumberMultiply(s1, s2) << endl;
}