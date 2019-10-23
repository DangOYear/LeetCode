//
// Created by ShengyunYu on 2019/10/17.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        bool flag = false;
        int x = king[0];
        int y = king[1];
        vector<vector<int>> res;
        bool queenPos[8][8];
        memset(queenPos, 0, sizeof(queenPos));

        for (int j = 0; j < queens.size(); ++j) {
            queenPos[queens[j][0]][queens[j][1]] = 1;
        }


        int directX[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int directY[] = {0, -1, 1, -1, 1, -1, 0, 1};

        for (int i = 0; i < 8; ++i) {
            int nextX = x + directX[i];
            int nextY = y + directY[i];
            bool flag = true;
            while (flag && judge(nextX, nextY)) {

                if (queenPos[nextX][nextY] == 1){
                    res.push_back({nextX, nextY});
                    break;
                }
                nextX = nextX + directX[i];
                nextY = nextY + directY[i];
            }

        }
        return res;
    }

    bool judge(int i, int j) {
        if (i < 8 && i >= 0 && j < 8 && j >= 0)
            return true;
        return false;
    }
};

int main() {
    vector<vector<int>> queens = {{0,1},{1,0},{4,0},{0,4},{3,3},{2,4}};
    vector<int> king = {0, 0};
    Solution solution;

    PrintIntVectorVector(solution.queensAttacktheKing(queens, king));
}