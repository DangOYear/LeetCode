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
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string c = "";
        int carry = 0;
        for(int i = 0; )
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