//
// Created by ShengyunYu on 2019/10/6.
//

#include "common.h"


class Solution {
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {

    }
};


int main() {
    int N = 4;
    vector<vector<int>> paths{{1,2},{2,3},{3,4},{4,1},{1,3},{2,4}};
    Solution solution;
    PrintIntVector(solution.gardenNoAdj(N, paths));
}