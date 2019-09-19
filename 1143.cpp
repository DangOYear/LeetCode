//
// Created by ShengyunYu on 2019/9/17.
//
#include "common.h"

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int row = text1.length();
        int col = text2.length();
        vector<vector<int>> res(row + 1, vector<int> (col + 1, 0));

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (text1[i] == text2[j]) {
                    res[i+1][j+1] = res[i][j] + 1;
                } else{
                    res[i+1][j+1] = max(res[i+1][j], res[i][j+1]);
                }
            }
        }
        return res[row][col];
    }
};


int main() {
    string text1 = "abcde", text2 = "ace";
    Solution solution;
    cout << solution.longestCommonSubsequence(text1, text2);
}