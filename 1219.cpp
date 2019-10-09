//
// Created by ShengyunYu on 2019/10/9.
//

#include "common.h"


class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        row = grid.size();
        col = row == 0?0:grid[0].size();
        int res = 0;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                res = max(res, dfs(i, j, grid));
            }
        }
        return res;
    }


    int dfs(int x, int y, vector<vector<int>>& grid) {
        if (x >= row || x < 0 || y >= col || y < 0  || grid[x][y] == 0)
            return 0;
        int temp = grid[x][y];
        grid[x][y] = 0;
        int res = 0;
        int directX[] = {-1, 1, 0, 0};
        int directY[] = {0, 0, 1, -1};

        for (int i = 0; i < 4; ++i) {
            int nextX = x + directX[i];
            int nextY = y + directY[i];
            res = max(res, dfs(nextX, nextY, grid));
        }
        res = temp + res;
        grid[x][y] = temp;
        return res;
    }

private:
    int row;
    int col;
};


int main() {
    vector<vector<int>> grid{{1,0,7},{2,0,6},{3,4,5},{0,3,0},{9,0,20}};

    Solution solution;
    cout << solution.getMaximumGold(grid) << endl;
}