//
// Created by ShengyunYu on 2019/7/13.
//

#include "common.h"


class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = row == 0?0:grid[0].size();
        int res = 0;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (grid[i][j] == 0)
                    continue;

                if (i == 0 || grid[i - 1][j] == 0)
                    ++res;

                if (j == 0 || grid[i][j - 1] == 0)
                    ++res;

                if (i == row - 1 || grid[i + 1][j] == 0)
                    ++res;

                if (j == col - 1 || grid[i][j + 1] == 0)
                    ++res;
            }
        }
        return res;
    }
};

int main() {
    vector<vector<int>> grid{{0,1,0,0},
        {1,1,1,0},
        {0,1,0,0},
        {1,1,0,0}};

    Solution solution;

    cout << solution.islandPerimeter(grid);

}
