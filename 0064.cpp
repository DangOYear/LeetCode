//
// Created by ShengyunYu on 2019/7/14.
//
#include "common.h"


class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 && j != 0) {
                    grid[i][j] = grid[i][j] + grid[i][j - 1];
                } else{
                    if(j == 0 && i != 0) {
                        grid[i][j] = grid[i][j] + grid[i - 1][j];
                    } else if (i != 0 && j != 0){
                        grid[i][j] = grid[i][j] + min(grid[i - 1][j], grid[i][j - 1]);
                    }
                }

            }
        }
        return grid[m - 1][n - 1];
    }
};


int main() {
    Solution s;
    vector<vector<int>> grid{{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    cout << s.minPathSum(grid) << endl;
}