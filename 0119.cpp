//
// Created by ShengyunYu on 2019/4/3.
//
#include "common.h"


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res;

        vector<int> vec{1};
        res.push_back(vec);
        for (int i = 1; i <= rowIndex; ++i) {
            vector<int> row;
            vector<int> preRow = res[i - 1];
            row.push_back(1);
            for (int j = 1; j < i; ++j) {
                row.push_back(preRow[j] + preRow[j - 1]);
            }
            row.push_back(1);
            res.push_back(row);
        }
        return res[rowIndex];
    }
};