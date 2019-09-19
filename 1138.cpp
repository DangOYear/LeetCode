//
// Created by ShengyunYu on 2019/9/19.
//
#include "common.h"

class Solution {
public:
    string alphabetBoardPath(string target) {
        string res = "";
        char alphaMap[][6] = {"abcde", "fghij", "klmno", "pqrst", "uvwxy", "z"};
        map<char,pair<int,int> > matrix;
        for (int i = 0; i < 6; ++i) {
            for (int j = 0; j < 5; ++j) {
                matrix[alphaMap[i][j]] = make_pair(i, j);
            }
        }
        matrix[alphaMap[5][0]] = make_pair(5, 0);

        int preX = 0;
        int preY = 0;

        for (int i = 0; i < target.length(); ++i) {
            int x = matrix[target[i]].first;
            int y = matrix[target[i]].second;

            int chx = x - preX;
            int chy = y - preY;

            if (chy < 0) {
                chy = abs(chy);
                while (chy) {
                    res += 'L';
                    chy--;
                }
            }

            if (chx < 0) {
                chx = abs(chx);
                while (chx) {
                    res += 'U';
                    chx--;
                }
            }

            if (chx > 0) {
                while (chx) {
                    res += 'D';
                    chx--;
                }
            }

            if (chy > 0) {
                while (chy) {
                    res += 'R';
                    chy--;
                }
            }
            res += '!';
            preX = x;
            preY = y;
        }
        return res;
    }
};


int main() {
    string target = "leet";
    Solution solution;

    PrintBool(solution.alphabetBoardPath(target) == "DDR!UURRR!!DDD!");
}