//
// Created by ShengyunYu on 2019/6/8.
//

#include "common.h"



class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int RookX;
        int Rooky;
        int count = 0;
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[i].size(); ++j) {
                if (board[i][j] == 'R') {
                    RookX = i;
                    Rooky = j;
                }
            }
        }
        int TempX;
        int TempY;

        TempX = RookX;
        TempY = Rooky;

        while (--TempX >= 0) {
            if (board[TempX][TempY] == 'B') {
                break;
            }
            if (board[TempX][TempY] == 'p') {
                count++;
                break;
            }
        }

        TempX = RookX;
        TempY = Rooky;

        while (++TempX <= 7) {
            if (board[TempX][TempY] == 'B') {
                break;
            }
            if (board[TempX][TempY] == 'p') {
                count++;
                break;
            }
        }

        TempX = RookX;
        TempY = Rooky;

        while (--TempY >= 0) {
            if (board[TempX][TempY] == 'B') {
                break;
            }
            if (board[TempX][TempY] == 'p') {
                count++;
                break;
            }
        }


        TempX = RookX;
        TempY = Rooky;

        while (++TempY <= 7) {
            if (board[TempX][TempY] == 'B') {
                break;
            }
            if (board[TempX][TempY] == 'p') {
                count++;
                break;
            }
        }

        return count;
    }
};


int main(){
    vector<vector<char>> board{{'.','.','.','.','.','.','.','.'},{'.','.','.','p','.','.','.','.'},{'.','.','.','R','.','.','.','p'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','p','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'}};

    Solution s;
    cout << s.numRookCaptures(board) << endl;
}