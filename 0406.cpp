//
// Created by ShengyunYu on 2019/9/15.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), [](vector<int> &a, vector<int> &b) {
            return (a[0] > b[0]) || (a[0] == b[0] && a[1] < b[1]);
        });

        //PrintIntVectorVector(people);
        vector<vector<int>> res;
        for (auto p:people) {
            res.insert(res.begin() + p[1], p);
        }
        return res;
    }
};


//Input:
//[[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]
//
//Output:
//[[5,0], [7,0], [5,2], [6,1], [4,4], [7,1]]


int main() {
    Solution solution;
    vector<vector<int>> people{{7,0}, {4,4}, {7,1}, {5,0}, {6,1}, {5,2}};

    PrintIntVectorVector(solution.reconstructQueue(people));

}