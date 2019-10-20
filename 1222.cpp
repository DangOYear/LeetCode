//
// Created by ShengyunYu on 2019/10/17.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {

    }
};

int main() {
    vector<vector<int>> queens = {{0,1},{1,0},{4,0},{0,4},{3,3},{2,4}};
    vector<int> king = {0, 0};
    Solution solution;

    PrintIntVectorVector(solution.queensAttacktheKing(queens, king));
}