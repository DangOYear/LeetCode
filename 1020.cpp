//
// Created by ShengyunYu on 2019/3/27.
//

#include "common.h"

class Solution {
public:
    int numEnclaves(vector<vector<int>>& A) {
        row = A.size();
        col = row == 0?0:A[0].size();
        int res = 0;
        for (int i = 0; i < row; ++i) {
            dfs(A, i, 0);
            dfs(A, i, col - 1);
        }
        for (int j = 0; j < col; ++j) {
            dfs(A, 0, j);
            dfs(A, row - 1, j);
        }
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (A[i][j] == 1)
                    ++res;
            }
        }
        return res;
    }

    void dfs(vector<vector<int>>& A, int x, int y) {
        int directX[] = {-1, 1, 0, 0};
        int directY[] = {0, 0, -1, 1};

        if (x >= row || x < 0 || y >= col || y < 0 || A[x][y] == 0)
            return;
        A[x][y] = 0;
        for (int i = 0; i < 4; ++i) {
            int nextX = x + directX[i];
            int nextY = y + directY[i];
            dfs(A, nextX, nextY);
        }

    }

private:
    int row;
    int col;
};


int main(){
    vector<vector<int>> A{{0,0,0,0},{1,0,1,0},{0,1,1,0},{0,0,0,0}};
    Solution s;
    cout << s.numEnclaves(A) << endl;
}