//
// Created by ShengyunYu on 2019/6/13.
//

#include "common.h"


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows;
        set<int> cols;
        int R = matrix.size();
        int C = matrix[0].size();
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                if (matrix[i][j] == 0) {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        for (int k = 0; k < R; ++k) {
            for (int l = 0; l < C; ++l) {
                if (rows.count(k) || cols.count(l)) {
                    matrix[k][l] = 0;
                }
            }
        }
    }
};


int main() {
    Solution s;

}