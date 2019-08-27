//
// Created by ShengyunYu on 2019/8/14.
//

#include "common.h"

class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int row = A.size();
        int col = row == 0?0:A[0].size();
        int res = (1 << (col - 1)) * row;
        for (int j = 1; j < col; ++j) {
            int count = 0;
            for (int i = 0; i < row; ++i) {
                if (A[i][j] == A[i][0])
                    ++count;
            }
            res += max(count, row - count) * (1 << (col - 1 -j));
        }
        return res;
    }
};


int main() {
    vector<vector<int>> A{{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    Solution solution;
    cout << solution.matrixScore(A);

}