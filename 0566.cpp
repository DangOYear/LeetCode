//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if (nums.size() == 0 || (r * c) != nums.size() * nums[0].size())
            return nums;
        queue<int> q;
        vector<vector<int>> reshaped_Matrix;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums[i].size(); ++j) {
                q.push(nums[i][j]);
            }
        }

        for (int k = 0; k < r; ++k) {
            vector<int> row;
            for (int i = 0; i < c; ++i) {
                row.push_back(q.front());
                q.pop();
            }
            reshaped_Matrix.push_back(row);
        }
        return reshaped_Matrix;
    }
};


