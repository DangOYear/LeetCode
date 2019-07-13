//
// Created by ShengyunYu on 2019/7/13.
//

#include "common.h"



class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int res = 0;

        sort(costs.begin(), costs.end(), [](vector<int> a, vector<int> b) {
            return a[0] - a[1] < b[0] - b[1];
        });

        for (int i = 0; i < costs.size() / 2; ++i) {
            res += costs[i][0];
        }

        for (int j = costs.size() / 2; j < costs.size(); ++j) {
            res += costs[j][1];
        }
        return res;
    }
};


