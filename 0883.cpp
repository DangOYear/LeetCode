//
// Created by ShengyunYu on 2019/7/13.
//

#include "common.h"


class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int front = 0;
        int top = 0;
        int side = 0;
        for (int i = 0; i < grid.size(); ++i) {
            int max = INT_MIN;
            for (int j = 0; j < grid[i].size(); ++j) {
                if (grid[i][j] != 0) {
                    top++;
                }
                if (grid[i][j] > max) {
                    max = grid[i][j];
                }
            }
            side += max;
        }

        for (int i = 0; i < grid[0].size(); ++i) {
            int max = INT_MIN;
            for (int j = 0; j < grid.size(); ++j) {
                if (grid[j][i] > max) {
                    max = grid[j][i];
                }
            }
            front += max;
        }
        return top + front + side;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid{{1,1,1},{1,0,1},{1,1,1}};
    cout << s.projectionArea(grid);
}