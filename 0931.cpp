//
// Created by ShengyunYu on 2019/9/15.
//

#include "common.h"



class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {

        int N = A.size();
        for (int i = 1; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                int minPathNum = A[i - 1][j];
                if (j > 0)
                    minPathNum = min(minPathNum, A[i - 1][j - 1]);
                if (j + 1 < N)
                    minPathNum = min(minPathNum, A[i - 1][j + 1]);
                A[i][j] += minPathNum;
            }
        }

        int res = INT_MAX;

        for (auto num:A[N - 1]) {
            res = min(res, num);
        }
        return res;
    }
};


/**
 *超时。。。。
 *
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        row = A.size();

        col = A.size() == 0?0:A[0].size();
        res = INT_MAX;
        int temp = 0;

        for (int j = 0; j < col; ++j) {
            dfs(A, 0, j, temp + A[0][j]);
        }
        return res;
    }


    void dfs(vector<vector<int>>& A, int x, int y, int temp) {
        if (x == row - 1) {
            res = min(temp, res);
            return;
        }
        int directX[] = {1, 1, 1};
        int directY[] = {-1, 1, 0};
        for (int i = 0; i < 3; ++i) {
            int nextX = x + directX[i];
            int nextY = y + directY[i];
            if (nextX >= 0 && nextX < row && nextY >= 0 && nextY < col) {
                dfs(A, nextX, nextY, temp + A[nextX][nextY]);
            }
        }
    }

private:
    int row;
    int col;
    int res;
};
*/
int main() {
    Solution solution;
    vector<vector<int>> A{{1,2,3},{4,5,6},{7,8,9}};
    cout << solution.minFallingPathSum(A);
}