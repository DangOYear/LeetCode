//
// Created by ShengyunYu on 2019/7/31.
//

#include "common.h"


class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        row = grid.size();
        col = row == 0?0:grid[0].size();
        int res = 0;

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                int count = 0;
                dfs(grid, i, j, count);
                res = max(res, count);
            }
        }
        return res;
    }

    void dfs(vector<vector<int>>& grid, int i, int j, int& count) {
        if (i < 0 || i >= row || j < 0 || j >= col || grid[i][j] == 0)
            return;
        else {
            grid[i][j] = 0;
            ++count;
        }
        int direct_X[] = {0, 0, -1, 1};
        int direct_Y[] = {-1, 1, 0, 0};
        for (int k = 0; k < 4; ++k) {
            dfs(grid, i + direct_X[k], j + direct_Y[k], count);
        }
    }

private:
    int row;
    int col;
};

int main() {
    vector<vector<int>> grid{{0,0,1,0,0,0,0,1,0,0,0,0,0},
                                {0,0,0,0,0,0,0,1,1,1,0,0,0},
                                {0,1,1,0,1,0,0,0,0,0,0,0,0},
                                {0,1,0,0,1,1,0,0,1,0,1,0,0},
                                {0,1,0,0,1,1,0,0,1,1,1,0,0},
                                {0,0,0,0,0,0,0,0,0,0,1,0,0},
                                {0,0,0,0,0,0,0,1,1,1,0,0,0},
                                {0,0,0,0,0,0,0,1,1,0,0,0,0}
                            };
    Solution solution;
    cout << solution.maxAreaOfIsland(grid);
}