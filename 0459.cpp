//
// Created by ShengyunYu on 2019/10/26.
//

#include "common.h"


class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len = s.length();
        for (int i = len / 2; i >= 1; --i) {
            if (len % i == 0) {
                string temp = s.substr(0, i);
                string tempstr = "";
                for (int j = 0; j < len / i; ++j) {
                    tempstr += temp;
                }
                if (tempstr == s)
                    return true;
            }
        }
        return false;
    }
};


int main() {
    Solution solution;
    string s = "abcabcabcabc";
    PrintBool(solution.repeatedSubstringPattern(s));

    s = "aba";
    PrintBool(solution.repeatedSubstringPattern(s));
}