//
// Created by ShengyunYu on 2019/7/31.
//

#include "common.h"


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        for (int k = 0; k < n; ++k) {
            reverse(matrix[k].begin(), matrix[k].end());
        }
    }
};


int main() {
    vector<vector<int>> matrix = {
                                {1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}
                                };
    Solution solution;
    solution.rotate(matrix);
    PrintIntVectorVector(matrix);
}