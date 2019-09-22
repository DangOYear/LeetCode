//
// Created by ShengyunYu on 2019/9/22.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        int difference = INT_MAX;
        for (int i = 0; i < arr.size() - 1; ++i) {

            if (abs(arr[i] - arr[i+1]) == difference) {
                res.push_back({arr[i], arr[i+1]});
            }
            if (abs(arr[i] - arr[i+1]) < difference) {
                res.clear();
                res.push_back({arr[i], arr[i+1]});
                difference = abs(arr[i] - arr[i+1]);
            }

        }
        return res;
    }
};

int main() {
    vector<int> arr{3,8,-10,23,19,-4,-14,27};
    Solution solution;

    PrintIntVectorVector(solution.minimumAbsDifference(arr));
}