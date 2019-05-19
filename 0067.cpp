//
// Created by ShengyunYu on 2019/1/29.
//

#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        int aLen = a.length() - 1;
        int bLen = b.length() - 1;
        while(aLen >= 0 || bLen >= 0 || carry == 1)
        {
            carry += aLen >= 0 ? a[aLen--] - '0': 0;
            carry += bLen >= 0 ? b[bLen--] - '0': 0;
            res = to_string(carry % 2) + res;
            carry /= 2;
        }
        return res;
    }
};

int main(){
    Solution s;
    string a = "11";
    string b = "1";
    string c = "1010";
    string d = "1011";
    cout << s.addBinary(a, b) << endl;
    cout << s.addBinary(c, d) << endl;
}