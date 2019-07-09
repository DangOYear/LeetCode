//
// Created by ShengyunYu on 2019/6/30.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > res(n, vector<int>(n, 0));

        fill(0, 0, n - 1, n - 1, 1, res, n);
        return res;
    }

    void fill(int left_i, int left_j, int right_i, int right_j, int num, vector<vector<int>> &res, int n) {
        if (num > n * n)
            return;
        if (left_i == right_i && left_j == right_j) {
            res[left_i][left_j] = num;
            return;
        }
        for (int j = left_j; j <= right_j; ++j) {
            res[left_i][j] = num;
            ++num;
        }

        for (int i = left_i + 1; i <= right_i; ++i) {
            res[i][right_j] = num;
            ++num;
        }

        for (int j = right_j - 1; j >= left_j; --j) {
            res[right_i][j] = num;
            ++num;
        }

        for (int i = right_i - 1 ; i >= left_i + 1; --i) {
            res[i][left_j] = num;
            ++num;
        }
        fill(left_i + 1, left_j + 1, right_i - 1, right_j - 1, num, res, n);
    }
};


int main() {
    Solution s;
    PrintIntVectorVector(s.generateMatrix(3));
}