//
// Created by ShengyunYu on 2019/6/10.
//

#include "common.h"


class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() == 0) return "";
        int begin = 0;
        int end = 0;
        for (int i = 0; i < s.length(); ++i) {
            int LenA = findPalindrome(s, i, i);
            int LenB = findPalindrome(s, i, i + 1);
            int maxLen = max(LenA, LenB);
            if (maxLen > end - begin) {
                begin = i - (maxLen - 1) / 2;
                end = i + maxLen / 2;
            }
        }
        return s.substr(begin, end - begin + 1);
    }

    int findPalindrome(string s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }


};



int main() {
    Solution s;
    string S = "babad";
    cout << s.longestPalindrome(S) << endl;

    S = "bb";
    cout << s.longestPalindrome(S) << endl;
}