//
// Created by ShengyunYu on 2019/10/20.
//

#include "common.h"


class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int minDiff = INT_MAX;
        int sum = 0;

        for (int num:arr) {
            sum += num;
        }
        return (arr[0] + arr[arr.size()-1]) * (arr.size() + 1) / 2 - sum;
    }
};


int main() {
    Solution solution;

    vector<int> arr{5, 7, 11, 13};

    PrintInt(solution.missingNumber(arr));
}