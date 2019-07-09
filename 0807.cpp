//
// Created by ShengyunYu on 2019/7/9.
//

#include "common.h"

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int res = 0;
        int left[grid[0].size()];
        int top[grid.size()];

        for (int i = 0; i < grid.size(); ++i) {
            int max = INT_MIN;
            for (int j = 0; j < grid[i].size(); ++j) {
                if (grid[i][j] > max) {
                    max = grid[i][j];
                }
            }

            top[i] = max;
        }

        for (int j = 0; j < grid[0].size(); ++j) {
            int max = INT_MIN;
            for (int i = 0; i < grid.size(); ++i) {
                if (grid[i][j] > max) {
                    max = grid[i][j];
                }
            }

            left[j] = max;
        }

        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                res += min(top[i], left[j]) - grid[i][j];
            }
        }
        return res;
    }
};