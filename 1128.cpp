//
// Created by ShengyunYu on 2019/10/24.
//

#include "common.h"


class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int res = 0;
        map<pair<int, int>, int> count;
        for (int i = 0; i < dominoes.size(); ++i) {
            int minNum = min(dominoes[i][0], dominoes[i][1]);
            int maxNum = max(dominoes[i][0], dominoes[i][1]);
            count[make_pair(minNum, maxNum)]++;
        }

        for (auto m:count) {
            res += (m.second) * (m.second - 1) / 2;
        }
        return res;
    }
};


int main() {
    vector<vector<int>> dominoes = {{1,2},{2,1},{3,4},{5,6}};

    Solution solution;


    PrintInt(solution.numEquivDominoPairs(dominoes));
}