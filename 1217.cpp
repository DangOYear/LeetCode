//
// Created by ShengyunYu on 2019/10/6.
//

#include "common.h"


class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int odd = 0;
        int even = 0;
        for (int num:chips) {
            if (num % 2 == 1) {
                odd++;
            } else{
                even++;
            }
        }
        return min(even, odd);
    }
};


int main() {
    vector<int> chips{2,2,2,3,3};
    Solution solution;
    cout << solution.minCostToMoveChips(chips);
}