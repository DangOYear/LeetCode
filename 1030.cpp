//
// Created by ShengyunYu on 2019/7/13.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int> > res;
        int visited[R][C];
        memset(visited, 0, sizeof(visited));
        queue<vector<int>> q;
        q.push({r0, c0});
        while (!q.empty()) {
            vector<int> p = q.front();
            q.pop();

            if (visited[p[0]][p[1]] != 1) {
                res.push_back(p);
                visited[p[0]][p[1]] = 1;
                if (p[0] - 1 >= 0 && visited[p[0] - 1][p[1]] != 1)  q.push({p[0] - 1, p[1]});
                if (p[0] + 1 <= R - 1 && visited[p[0] + 1][p[1]] != 1) q.push({p[0] + 1, p[1]});
                if (p[1] - 1 >= 0 && visited[p[0]][p[1] - 1] != 1)  q.push({p[0], p[1] - 1});
                if (p[1] + 1 <= C - 1 && visited[p[0]][p[1] + 1] != 1)  q.push({p[0], p[1] + 1});
            }
        }

        return res;
    }
};


int main() {
    Solution s;
    int R = 1, C = 2, r0 = 0, c0 = 0;
    PrintIntVectorVector(s.allCellsDistOrder(R, C , r0, c0));
}