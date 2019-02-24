//
// Created by ShengyunYu on 2019/2/24.
//

#include "common.h"

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>> q;
        int fresh = 0;
        int day = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == 1)    ++fresh;
                else if (grid[i][j] == 2){
                    q.emplace(i,j);
                }
            }
        }
        int dir[4][4] = {{1,0},{-1,0},{0,1},{0,-1}};
        while (!q.empty() && fresh){
            int size = q.size();
            while (size--) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for (int i = 0; i < 4; ++i) {
                    int dx = x + dir[i][0];
                    int dy = y + dir[i][1];
                    if (dx < 0 || dy < 0 || dx >= m || dy >= n || grid[dx][dy] != 1) continue;
                    --fresh;
                    grid[dx][dy] = 2;
                    q.emplace(dx, dy);
                }
            }
            ++day;
        }
        return fresh?-1:day;
    }
};

int main(){
    vector<vector<int> > grid{{2,1,1},{1,1,0},{0,1,1}};
    Solution s;
    cout << s.orangesRotting(grid) << endl;

}