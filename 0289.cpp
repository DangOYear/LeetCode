//
// Created by ShengyunYu on 2019/7/31.
//

#include "common.h"

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        //将活细胞死亡的标记为-1;
        //将死细胞复活的标记为-2;
        int row = board.size();
        int col = row == 0?0:board[0].size();
        int direct_x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int direct_y[] = {-1, 0, 1, -1, 1, -1, 0, 1};
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                int live = 0;

                for (int k = 0; k < 8; ++k) {
                    int x = i + direct_x[k];
                    int y = j + direct_y[k];

                    if (x < 0 || x >= row || y < 0 || y >= col)
                        continue;
                    if (board[x][y] == -1 || board[x][y] == 1)
                        live++;
                }
                if (board[i][j] == 1) {
                    if (live < 2) {
                        board[i][j] = -1;
                    } else{
                        if (live > 3) {
                            board[i][j] = -1;
                        }
                    }
                } else{
                    if (live == 3)
                        board[i][j] = -2;
                }
            }
        }


        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (board[i][j] == -1)
                    board[i][j] = 0;
                if (board[i][j] == -2)
                    board[i][j] = 1;
            }
        }
    }
};

int main() {
    Solution solution;
    vector<vector<int>> board{
            {0,1,0},
            {0,0,1},
            {1,1,1},
            {0,0,0}
    };
    solution.gameOfLife(board);
    PrintIntVectorVector(board);
}