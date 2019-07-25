//
// Created by ShengyunYu on 2019/7/25.
//

#include "common.h"

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int row = board.size();
        int col = row == 0?0:board[0].size();
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                bool isEdge = (i == 0) || (i == row - 1) || (j == col - 1) || (j == 0);
                if (isEdge && board[i][j] == 'O') {
                    dfs(board, i, j);
                }
            }
        }

        for (int k = 0; k < row; ++k) {
            for (int i = 0; i < col; ++i) {
                if (board[k][i] == 'O') {
                    board[k][i] = 'X';
                }
                if (board[k][i] == '#') {
                    board[k][i] = 'O';
                }
            }
        }
    }
    void dfs(vector<vector<char>>& board, int i, int j) {
        board[i][j] = '#';
        int x[] = {-1, 0, 0, 1};
        int y[] = {0, 1, -1, 0};

        for (int k = 0; k < 4; ++k) {
            int nextX = i + x[k];
            int nextY = j + y[k];
            if (!(nextX >= board.size() || nextX < 0 || nextY >= board[0].size() || nextY < 0) && board[nextX][nextY] == 'O') {
                dfs(board, nextX, nextY);
            }
        }
    }
};

int main() {
    vector<vector<char>> board{{'X','X','X','X'},{'X','O','O','X'},{'X','X','O','X'},{'X','O','X','X'}};
    Solution solution;
    solution.solve(board);
    PrintCharVectorVector(board);
}