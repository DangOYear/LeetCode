//
// Created by ShengyunYu on 2019/10/6.
//

#include "common.h"


class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        if (points.size() < 3)
            return 0;
        int res = 0;
        for (int i = 0; i < points.size(); ++i) {
            map<int, int> hash;
            for (int j = 0; j < points.size(); ++j) {
                if (j == i)
                    continue;
                int dis = distance(points[i], points[j]);
                hash[dis]++;
            }

            for (auto p:hash) {
                if (p.second >= 2)
                    res += p.second * (p.second - 1);
            }
        }
        return res;
    }

    int distance(vector<int> a, vector<int> b) {
        return pow(a[0] - b[0], 2) +  pow(a[1] - b[1], 2);
    }
};


int main() {
    vector<vector<int>> points{{0,0},{1,0},{2,0}};
    Solution solution;

    cout << solution.numberOfBoomerangs(points);
}