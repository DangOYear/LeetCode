//
// Created by ShengyunYu on 2019/10/22.
//

#include "common.h"

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int p = coordinates[0][0];
        int q = coordinates[0][1];
        int m = coordinates[1][0];
        int r = coordinates[1][1];

        for (auto pair: coordinates) {
            if ((pair[0] - m) * (pair[1] - q) != (pair[1] - r) * (pair[0] - p))
                return false;
        }
        return true;
    }
};


int main() {
    Solution solution;

    vector<vector<int>> coordinates = {{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};
    PrintBool(solution.checkStraightLine(coordinates));
}