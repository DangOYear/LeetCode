//
// Created by ShengyunYu on 2019/6/12.
//

#include "common.h"



class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<int> s;
        string res = "";
        for (int i = 0; i < S.length(); ++i) {
            if (s.size() == 1 && S[i] == ')') {
                s.pop();
                continue;
            }
            if (s.size() > 1 && S[i] == ')') {
                res += ")";
                s.pop();
                continue;
            }

            if (s.size() >= 1 && S[i] == '(') {
                res += "(";
                s.push(S[i]);
                continue;
            }
            s.push(S[i]);
        }
        return res;
    }
};


int main() {
    Solution s;
    string S1 = "(()())(())";
    PrintBool(s.removeOuterParentheses(S1) == "()()()");

    string S2 = "(()())(())(()(()))";
    cout << s.removeOuterParentheses(S2) << endl;
    PrintBool(s.removeOuterParentheses(S2) == "()()()()(())");


    string S3 = "()()";
    PrintBool(s.removeOuterParentheses(S3) == "");

}