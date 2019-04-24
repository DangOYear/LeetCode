
//
// Created by ShengyunYu on 2019/4/24.
//

#include "common.h"


class Solution {
public:
    int longestPalindrome(string s) {
        int hash[128] = {0};
        int res = 0;
        for (int i = 0; i < s.length(); ++i) {
            ++hash[s[i]];
        }
        for (int j = 0; j < 128; ++j) {
            res += hash[j] / 2 * 2;
            if (res % 2 == 0 && hash[j] % 2 == 1){
                res += 1;
            }
        }
        return res;
    }
};

int main(int argc, char **argv){
    Solution s;
    string s1 = "abccccdd";
    cout << s.longestPalindrome(s1) << endl;
}


