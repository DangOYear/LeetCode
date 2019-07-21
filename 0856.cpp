//
// Created by ShengyunYu on 2019/7/21.
//

#include "common.h"

class Solution {
public:
    int scoreOfParentheses(string S) {
        int res = 0;
        int deep = 0;
        for (int i = 0; i < S.length(); ++i) {
            if (S[i] == '(') ++deep;
            if (S[i] == ')') --deep;
            if (S[i] == ')' && S[i - 1] == '(') res += (1 << deep);
        }
        return res;
    }
};

int main() {
    Solution solution;

    string s = "()";
    cout << solution.scoreOfParentheses(s) << endl;

    s = "(())";
    cout << solution.scoreOfParentheses(s) << endl;

    s = "()()";
    cout << solution.scoreOfParentheses(s) << endl;

    s = "(()(()))";
    cout << solution.scoreOfParentheses(s) << endl;


}