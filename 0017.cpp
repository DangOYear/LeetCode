//
// Created by ShengyunYu on 2019/7/11.
//

#include "common.h"


class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.length() != 0)
            backstrace("", digits);
        return res;
    }


    void backstrace(string temp, string digits) {
        if (digits.length() == 0) {
            res.push_back(temp);
            return;
        }
        string digit = digits.substr(0, 1);
        string letters = phone[digit];
        for (int i = 0; i < letters.length(); ++i) {
            string letter = letters.substr(i, 1);
            backstrace(temp + letter, digits.substr(1));
        }
    }

private:
    map<string, string> phone{{"2", "abc"}, {"3", "def"}, {"4", "ghi"},{"5", "jkl"},{"6", "mno"},
                {"7", "pqrs"},
                {"8", "tuv"},
                {"9", "wxyz"}};
    vector<string> res;
};


int main() {
    Solution s;
    string s1 = "23";
    PrintStringVector(s.letterCombinations(s1));
}