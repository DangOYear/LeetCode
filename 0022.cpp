//
// Created by ShengyunYu on 2019/6/11.
//

#include "common.h"


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(res, n, n, "");
        return res;
    }

    void backtrack(vector<string> &res, int left, int right, string ans) {
        if (left < 0 || right < 0)
            return;
        if (left == 0 && right == 0) {
            res.push_back(ans);
        }
        if (left <= right) {
            backtrack(res, left - 1, right, ans + "(");
            backtrack(res, left, right - 1, ans + ")");
        }
    }

};


int main() {
    Solution s;
    PrintStringVector(s.generateParenthesis(3));
}