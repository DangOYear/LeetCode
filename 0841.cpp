//
// Created by ShengyunYu on 2019/8/23.
//

#include "common.h"


class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int N = rooms.size();
        int visited[N];
        memset(visited, 0, sizeof(visited));
        queue<int> q;
        q.push(0);
        visited[0] = 1;
        while (!q.empty()) {
            int room = q.front();
            q.pop();
            for (int key:rooms[room]) {
                if (visited[key] == 0) {
                    visited[key] = 1;
                    q.push(key);

                }
            }
        }
        for (int num:visited) {
            if (num == 0)
                return false;
        }
        return true;
    }
};

int main() {
    vector<vector<int>> rooms{{1},{2},{3},{}};
    Solution solution;
    PrintBool(solution.canVisitAllRooms(rooms));
}