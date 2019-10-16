//
// Created by ShengyunYu on 2019/10/16.
//

#include "common.h"

class Solution {
public:
    int balancedStringSplit(string s) {
        int left = 0;
        int right = 0;
        int res = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'R') ++right;
            else    ++left;

            if (right == left && right != 0) {
                ++res;
                left = 0;
                right = 0;
            }
        }
        return res;
    }
};


int main() {
    Solution solution;
    string s = "RLRRLLRLRL";
    cout << solution.balancedStringSplit(s) << endl;
}