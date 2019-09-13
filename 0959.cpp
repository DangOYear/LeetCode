//
// Created by ShengyunYu on 2019/9/13.
//


#include "common.h"


class Solution {
public:
    int regionsBySlashes(vector<string>& grid) {
        int m = grid.size();
        int n = m == 0?0:grid[0].length();
        int res = 0;
        vector<vector<int>> newGrid(3 * m, vector<int>(3 * n, 0));

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '/')
                    newGrid[3*i][3*j+2] = newGrid[3*i+1][3*j+1] = newGrid[3*i+2][3*j] = 1;
                if (grid[i][j] == '\\') {
                    newGrid[3*i][3*j] = newGrid[3*i+1][3*j+1] = newGrid[3*i+2][3*j+2] = 1;
                }
            }
        }
        m *= 3;
        n *= 3;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (newGrid[i][j] == 0) {
                    ++res;
                    dfs(newGrid, i, j, m, n);
                }
            }
        }
        return res;
    }


    void dfs(vector<vector<int>> &newGrid, int i, int j, int m, int n) {
        if (newGrid[i][j] == 1)
            return;
        newGrid[i][j] = 1;
        int directI[] = {-1, 1, 0, 0};
        int directJ[] = {0, 0, -1, 1};

        for (int k = 0; k < 4; ++k) {
            int nextI = i + directI[k];
            int nextJ = j + directJ[k];
            if (nextI < m && nextI >= 0 && nextJ < n && nextJ >= 0 && newGrid[nextI][nextJ] == 0)
                dfs(newGrid, nextI, nextJ, m, n);
        }
    }
};


int main() {
    vector<string> grid{
            "\\/",
            "/\\"
        };
    Solution solution;

    cout << solution.regionsBySlashes(grid);
}