//
// Created by ShengyunYu on 2019/9/25.
//

#include "common.h"


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cur = 0;
        for (int i = 0; i < t.length(); ++i) {
            if (t[i] == s[cur]) {
                ++cur;
            }
            if (cur == s.length())
                break;
        }
        if (cur == s.length())
            return true;
        else
            return false;
    }
};

//Example 1:
//s = "abc", t = "ahbgdc"
//
//Return true.
//
//Example 2:
//s = "axc", t = "ahbgdc"
//
//Return false.


int main() {
    Solution solution;
    string s = "abc";
    string t = "ahbgdc";
    PrintBool(solution.isSubsequence(s, t));
    cout << "------" << endl;
    s = "axc";
    t = "ahbgdc";
    PrintBool(solution.isSubsequence(s, t));

}