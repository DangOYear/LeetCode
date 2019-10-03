//
// Created by ShengyunYu on 2019/10/3.
//

#include "common.h"


class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int directX[] = {-1, 1, 0, 0};
        int directY[] = {0, 0, -1, 1};
        int row = grid.size();
        int col = row == 0?0:grid[0].size();
        int res = 0;

        for (int x = 0; x < row; ++x) {
            for (int y = 0; y < col; ++y) {
                if (grid[x][y] > 0) {
                    res += 2;
                    for (int k = 0; k < 4; ++k) {
                        int nextX = x + directX[k];
                        int nextY = y + directY[k];
                        int surface = 0;
                        if (nextX >= 0 && nextX < row && nextY >= 0 && nextY < col) {
                            surface = grid[nextX][nextY];
                        }
                        res += max(grid[x][y] - surface, 0);
                    }
                }
            }
        }
        return res;
    }
};


int main() {
    vector<vector<int>> grid{{1, 0}, {0, 2}};
    Solution solution;
    cout << solution.surfaceArea(grid) << endl;
}