//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"

class Solution {
public:
    bool validPalindrome(string s) {
        for (int i = 0; i < s.length() / 2; ++i) {
            if (s[i] != s[s.length() - 1 - i]){
                return isPalindromeRange(s, i + 1, s.length() - 1 - i) || isPalindromeRange(s, i, s.length() - 2 - i);
            }
        }
        return true;
    }

    bool isPalindromeRange(string s, int left, int right){
        for (int i = left; i <= left + (right - left) / 2; ++i) {
            if (s[i] != s[right - (i - left)]) return false;
        }
        return true;
    }
};

int main(){
    Solution s;
    string S = "abca";
    cout << s.validPalindrome(S) << endl;
}