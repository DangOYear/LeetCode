
//
// Created by ShengyunYu on 2019/7/31.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> path;
        dfs(graph, res, path, 0);
        return res;
    }

    void dfs(vector<vector<int>>& graph, vector<vector<int>>& res, vector<int> path, int v) {
        path.push_back(v);
        if (v == graph.size() - 1) {
            res.push_back(path);
            return;
        }

        for (int i = 0; i < graph[v].size(); ++i) {
            dfs(graph, res, path, graph[v][i]);
        }
    }

};

int main() {
    Solution solution;
    vector<vector<int>> graph{{1,2}, {3}, {3}, {}};
    PrintIntVectorVector(solution.allPathsSourceTarget(graph));
}