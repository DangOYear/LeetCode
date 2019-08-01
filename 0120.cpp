//
// Created by ShengyunYu on 2019/7/31.
//
#include "common.h"

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        for (int i = n - 2; i >= 0; --i) {
            for (int j = 0; j <= i; ++j) {
                triangle[i][j] += min(triangle[i + 1][j + 1], triangle[i + 1][j]);
            }
        }
        return triangle[0][0];
    }
};


int main() {
    vector<vector<int>> triangle{
                                    {2},
                                    {3,4},
                                    {6,5,7},
                                    {4,1,8,3}
                                };
    Solution solution;
    cout << solution.minimumTotal(triangle);
}