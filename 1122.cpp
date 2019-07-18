//
// Created by ShengyunYu on 2019/7/17.
//

#include "common.h"


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> m;

        for (int i = 0; i < arr2.size(); ++i) {
            m[arr2[i]] = i - arr2.size();
        }

        sort(arr1.begin(), arr1.end(), [&](int a, int b) {
            auto v1 = m[a];
            auto v2 = m[b];
            if (v1 || v2)
                return v1 < v2;
            return a < b;
        });

        return arr1;
    }
};
//[2,2,2,1,4,3,3,9,6,7,19]

int main() {
    Solution s;
    vector<int> arr1{2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2{2,1,4,3,9,6};
    PrintIntVector(s.relativeSortArray(arr1, arr2));
}