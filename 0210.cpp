//
// Created by ShengyunYu on 2019/7/19.
//
#include "common.h"


class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> res;
        vector<int> inDegree(numCourses, 0);

        vector<vector<int>> G(numCourses);

        for (int j = 0; j < prerequisites.size(); ++j) {
            G[prerequisites[j][1]].push_back(prerequisites[j][0]);
        }

        for (int i = 0; i < prerequisites.size(); ++i) {
            inDegree[prerequisites[i][0]]++;
        }
        if (topoSort(G, inDegree, numCourses, res))
            return res;
        else
            return {};
    }

    bool topoSort(vector<vector<int>> G, vector<int> inDegree, int numCourses, vector<int>& res) {
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
            res.push_back(p);
        }
        if (num == numCourses)
            return true;
        else
            return false;
    }

};


int main () {
    int numCourses = 4;
    vector<vector<int>> prerequisites{{1,0},{2,0},{3,1},{3,2}};
    Solution s;
    PrintIntVector(s.findOrder(numCourses, prerequisites));
}