//
// Created by ShengyunYu on 2019/7/3.
//

#include "common.h"

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double res = -1;
        for(int i = 0; i < points.size() - 2; ++i) {
            for (int j = i + 1; j < points.size() - 1; ++j) {
                for (int k = j + 1; k < points.size(); ++k) {
                    double a = sqrt(pow(points[i][1] - points[j][1], 2.0) + pow(points[i][0] - points[j][0], 2.0));
                    double b = sqrt(pow(points[i][1] - points[k][1], 2.0) + pow(points[i][0] - points[k][0], 2.0));
                    double c = sqrt(pow(points[k][1] - points[j][1], 2.0) + pow(points[k][0] - points[j][0], 2.0));
                    double p = (a + b + c) / 2;
                    res = max(res, sqrt(p * (p - a) * (p - b) * (p - c)));

                }
            }
        }
        return res;
    }
};


int main() {
    Solution s;

    vector<vector<int>> v1{{0,0},{0,1},{1,0},{0,2},{2,0}};


    cout << s.largestTriangleArea(v1) << endl;
}