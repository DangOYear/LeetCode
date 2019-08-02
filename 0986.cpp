//
// Created by ShengyunYu on 2019/8/2.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> res;
        int posA = 0;
        int posB = 0;
        while (posA < A.size() && posB < B.size()) {
            int begin = max(A[posA][0], B[posB][0]);
            int end = min(A[posA][1], B[posB][1]);

            if (begin <= end) {
                res.push_back({begin, end});
            }

            if (A[posA][1] < B[posB][1])
                ++posA;
            else
                ++posB;
        }
        return res;
    }
};


int main() {
    Solution solution;
    vector<vector<int>> A = {{0,2},{5,10},{13,23},{24,25}}, B = {{1,5},{8,12},{15,24},{25,26}};
    PrintIntVectorVector(solution.intervalIntersection(A, B));

}