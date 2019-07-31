//
// Created by ShengyunYu on 2019/7/30.
//
#include "common.h"


class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                pq.push(matrix[i][j]);
            }
        }

        while (--k) {
            pq.pop();
        }
        return pq.top();
    }
};

int main() {
    vector<vector<int>> matrix = {
                                    {1, 5, 9},
                                    {10, 11, 13},
                                    {12, 13, 15}
                                    };
    int k = 8;
    Solution solution;
    cout << solution.kthSmallest(matrix, k);

}