//
// Created by ShengyunYu on 2019/7/21.
//

#include "common.h"

class Solution {
public:
    bool isValid(string S) {

        if (S.length() % 3 != 0)
            return false;

        stack<char > stack1;
        char preOne, preTwo;
        for (int i = 0; i < S.length(); ++i) {
            if (stack1.size() >= 2) {
                preOne = stack1.top();
                stack1.pop();
                preTwo = stack1.top();
                if (preTwo == 'a' && preOne == 'b' && S[i] == 'c') {
                    stack1.pop();
                } else{
                    stack1.push(preOne);
                    stack1.push(S[i]);
                }
            } else{
                stack1.push(S[i]);
            }
        }
        return stack1.empty();
    }
};

int main() {

    Solution solution;
    // TTFF
    string s = "aabcbc";
    PrintBool(solution.isValid(s));

    s = "abcabcababcc";
    PrintBool(solution.isValid(s));

    s = "abccba";
    PrintBool(solution.isValid(s));

    s = "cababc";
    PrintBool(solution.isValid(s));
}