
//
// Created by ShengyunYu on 2019/7/9.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> res;
        vector<int> dist;
        for (int j = 0; j < points.size(); ++j) {
            dist.push_back(getDist(points[j]));
        }
        sort(dist.begin(), dist.end());

        for (int i = 0; i < points.size(); ++i) {
            if (getDist(points[i]) <= dist[K - 1]) {
                res.push_back(points[i]);
            }
        }
        return res;
    }
    int getDist(vector<int> point) {
        return point[0] * point[0] + point[1] * point[1];
    }
};


int main() {
    vector<vector<int>> points = {{3,3},{5,-1},{-2,4}};
    int K = 2;
    Solution solution;
    PrintIntVectorVector(solution.kClosest(points, K));
}