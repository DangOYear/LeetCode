//
// Created by ShengyunYu on 2019/7/25.
//

#include "common.h"

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();

        int col = row == 0? 0:grid[0].size();
        //int visited[row][col];
        //memset(visited, 0, sizeof(visited));
        int count = 0;

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    ++count;
                }
            }
        }
        return count;
    }

    void dfs(vector<vector<char>>& grid, int i, int j) {
        grid[i][j] = '0';

        int x[] = {-1, 0, 0, 1};
        int y[] = {0, 1, -1, 0};

        for (int k = 0; k < 4; ++k) {
            int nextX = i + x[k];
            int nextY = j + y[k];
            if (!(nextX >= grid.size() || nextX < 0 || nextY >= grid[0].size() || nextY < 0) && grid[nextX][nextY] == '1') {
                dfs(grid, nextX, nextY);
            }
        }
    }
};

int main() {
    //vector<vector<char >> grid{{'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0'}};
    vector<vector<char >> grid;
    Solution solution;
    cout << solution.numIslands(grid) << endl;
}


