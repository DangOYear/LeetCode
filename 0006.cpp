//
// Created by ShengyunYu on 2019/6/11.
//

#include "common.h"


class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        string ans = "";
        vector<string> res(min(numRows, int(s.length())));

        bool goDown = false;
        int line = 0;

        for (int i = 0; i < s.length(); ++i) {
            res[line] += s[i];
            if (line == numRows - 1 || line == 0)   goDown = !goDown;
            line += goDown ? 1 : -1;
        }
        for (int j = 0; j < res.size(); ++j) {
            ans += res[j];
        }
        return ans;
    }
};

int main() {
    Solution s;
    string S = "LEETCODEISHIRING";
    int numRows = 3;
    PrintBool(s.convert(S, numRows) == "LCIRETOESIIGEDHN");

    S = "LEETCODEISHIRING";
    numRows = 4;
    PrintBool(s.convert(S, numRows) == "LDREOEIIECIHNTSG");
}