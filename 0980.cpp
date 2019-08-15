//
// Created by ShengyunYu on 2019/8/13.
//

#include "common.h"


class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        res = 0;
        Row = grid.size();
        Col = Row == 0 ? 0 : grid[0].size();
        empty = 0;
        for (int i = 0; i < Row; ++i) {
            for (int j = 0; j < Col; ++j) {
                if (grid[i][j] != -1)
                    empty++;

                if (grid[i][j] == 1) {
                    beginX = i;
                    beginY = j;
                }

                if (grid[i][j] == 2) {
                    endX = i;
                    endY = j;
                }
            }
        }
        dfs(grid, beginX, beginY);
        return res;
    }

    void dfs(vector<vector<int>>& grid, int posX, int posY) {
        empty--;
        if (empty < 0) return;
        if (posX == endX && posY == endY) {
            if (empty == 0) res++;
            empty++;
            return;
        }

        grid[posX][posY] = -2;
        int directX[] = {-1, 0, 0, 1};
        int directY[] = {0, -1, 1, 0};

        for (int i = 0; i < 4; ++i) {
            int nextX = posX + directX[i];
            int nextY = posY + directY[i];

            if (nextX >= 0 && nextX < Row && nextY >= 0 && nextY < Col) {
                if (grid[nextX][nextY] == 2 || grid[nextX][nextY] == 0)
                    dfs(grid, nextX, nextY);
            }
        }
        grid[posX][posY] = 0;
        empty++;
    }

private:
    int res;
    int beginX;
    int beginY;
    int endX;
    int endY;
    int Row;
    int Col;
    int empty;
};


int main() {
    Solution solution;
    vector<vector<int>> grid{{1,0,0,0},{0,0,0,0},{0,0,2,-1}};
    cout << solution.uniquePathsIII(grid) << endl;

}