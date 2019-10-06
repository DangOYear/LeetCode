//
// Created by ShengyunYu on 2019/10/6.
//

#include "common.h"

class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        vector<int> intersection1 = intersection(arr1, arr2);
        return intersection(intersection1, arr3);
    }

    vector<int> intersection(vector<int> arr1, vector<int> arr2) {
        vector<int> res;
        set<int> s(arr1.begin(), arr1.end());
        for (int num:arr2) {
            if (s.count(num) == 1)
                res.push_back(num);

        }
        return res;
    }

};

