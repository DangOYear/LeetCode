//
// Created by ShengyunYu on 2019/7/11.
//

#include "common.h"

class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        transform(S.begin(), S.end(), S.begin(), ::tolower);
        if (S.length() != 0)
            backstrace(0, S);
        return res;
    }

    void backstrace(int i, string S) {
        if (i == S.length()) {
            res.push_back(S);
        } else {
            backstrace(i + 1, S);

            if (isAlpha(S[i])) {
                S[i] = S[i] - 'a' + 'A';
                backstrace(i + 1, S);
            }
        }
    }

    bool isAlpha(char c) {
        if (c <= 'z' && c >= 'a')
            return true;
        if (c <= 'Z' && c >= 'A')
            return true;
        return false;
    }
private:
    vector<string> res;
};


int main() {
    string S = "a1b2";
    Solution s;
    PrintStringVector(s.letterCasePermutation(S));

    S = "3z4";

    PrintStringVector(s.letterCasePermutation(S));

    S = "12345";
    PrintStringVector(s.letterCasePermutation(S));
}