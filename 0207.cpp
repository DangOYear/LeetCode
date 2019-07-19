//
// Created by ShengyunYu on 2019/7/19.
//
#include "common.h"


class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> inDegree(numCourses, 0);

        vector<vector<int>> G(numCourses);

        for (int j = 0; j < prerequisites.size(); ++j) {
            G[prerequisites[j][1]].push_back(prerequisites[j][0]);
        }

        for (int i = 0; i < prerequisites.size(); ++i) {
            inDegree[prerequisites[i][0]]++;
        }
        return topoSort(G, inDegree, numCourses);
    }

    bool topoSort(vector<vector<int>> G, vector<int> inDegree, int numCourses) {
        int num = 0;
        queue<int> q;
        for (int i = 0; i < inDegree.size(); ++i) {
            if (inDegree[i] == 0)
                q.push(i);
        }

        while (!q.empty()) {
            int p = q.front();
            q.pop();
            for (int i = 0; i < G[p].size(); ++i) {
                int value = G[p][i];
                inDegree[value]--;
                if (inDegree[value] == 0)
                    q.push(value);
            }
            G[p].clear();
            num++;
        }
        if (num == numCourses)
            return true;
        else
            return false;
    }

};


int main() {
    Solution s;
    int num = 2;
    vector<vector<int>> prerequisites{{1,0},{0,1}};
    PrintBool(s.canFinish(num, prerequisites));
}