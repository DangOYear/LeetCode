//
// Created by ShengyunYu on 2019/6/13.
//


#include "common.h"


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {
            return a[0] < b[0];
        });


        for (int i = 0; i < intervals.size(); ++i) {
            if (res.size() == 0 || intervals[i][0] > res[res.size() - 1][1]) {
                res.push_back(intervals[i]);
            } else{
                res[res.size() - 1][1] = max(res[res.size() - 1][1], intervals[i][1]);
            }
        }
        return res;
        
    }
};


int main() {
    Solution s;
    vector<vector<int>> intervals{{1,3},{2,6},{8,10},{15,18}};
    PrintIntVectorVector(s.merge(intervals));


    vector<vector<int>> interval{{1,4},{4,5}};
    PrintIntVectorVector(s.merge(interval));
}