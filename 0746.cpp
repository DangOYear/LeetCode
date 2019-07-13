//
// Created by ShengyunYu on 2019/7/13.
//

#include "common.h"

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int res[3];
        res[0] = cost[0];
        res[1] = cost[1];
        for (int i = 2; i < cost.size(); ++i) {
            res[2] = min(res[0], res[1]);
            res[2] += cost[i];
            res[0] = res[1];
            res[1] = res[2];
        }
        return min(res[0], res[1]);
    }
};


int main() {
    Solution s;
    vector<int> cost{1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << s.minCostClimbingStairs(cost) << endl;
}