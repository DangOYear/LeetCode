//
// Created by ShengyunYu on 2019/9/11.
//

#include "common.h"


class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> res(m, vector<int>(n, 0));
        res[0][0] = 1;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i < m - 1)  res[i+1][j] = res[i+1][j] + res[i][j];
                if (j < n - 1)  res[i][j+1] = res[i][j+1] + res[i][j];
            }
        }
        return res[m - 1][n - 1];
    }
};


int main() {
    Solution solution;
    int m = 3, n = 2;
    cout << solution.uniquePaths(m, n) << endl;
}