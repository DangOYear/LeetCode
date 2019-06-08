//
// Created by ShengyunYu on 2019/6/8.
//

#include "common.h"


class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int resL = gcd(str1.length(), str2.length());
        string res = str1.substr(0, resL);
        //cout << res << endl;
        for (int i = 0; i < str1.size(); ++i) {
            if (str1[i] != res[i % resL])
                return "";
        }

        for (int j = 0; j < str2.size(); ++j) {
            if (str2[j] != res[j % resL])
                return "";
        }
        return res;
    }

    int gcd(int m, int n) {
        if (m % n == 0)
            return n;
        else
            return gcd(n, m % n);
    }
};


int main() {
    Solution s;

    string str1 = "ABCABC", str2 = "ABC";
    cout << s.gcdOfStrings(str1, str2) << endl;

    str1 = "ABABAB", str2 = "ABAB";
    cout << s.gcdOfStrings(str1, str2) << endl;

    str1 = "LEET", str2 = "CODE";
    cout << s.gcdOfStrings(str1, str2) << endl;
}