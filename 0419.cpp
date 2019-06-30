//
// Created by ShengyunYu on 2019/6/30.
//

#include "common.h"


class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {

        //int visited[board.size() * board[0].size()];
        int count = 0;

        //memset(visited, 0, sizeof(visited));

        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[i].size(); ++j) {
                if (board[i][j] == 'X') {
                    dfs(board, i, j);
                    ++count;
                }
            }
        }
        return count;
    }

    void dfs(vector<vector<char>>& board, int i, int j){
        if (i >= board.size() || j >= board[0].size() || board[i][j] != 'X')
            return;
        board[i][j] = '.';

        dfs(board, i + 1, j);
        dfs(board, i, j + 1);
    }
};

