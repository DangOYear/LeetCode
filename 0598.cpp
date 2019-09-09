//
// Created by ShengyunYu on 2019/9/9.
//


#include "common.h"

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        for (int i = 0; i < ops.size(); ++i) {
            m = min(m, ops[i][0]);
            n = min(n, ops[i][1]);
        }
        return m * n;
    }
};

int main() {
    int m = 3, n = 3;
    vector<vector<int>> operations = {{2, 2}, {3, 3}};

    Solution solution;

    cout << solution.maxCount(m, n, operations);
}