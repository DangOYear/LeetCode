//
// Created by ShengyunYu on 2019/7/3.
//

#include "common.h"


class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); ++i) {
            if (!isSame(matrix, i, 0))
                return false;
        }

        for (int j = 0; j < matrix[0].size(); ++j) {
            if (!isSame(matrix, 0, j))
                return false;
        }

        return true;
    }

    bool isSame(vector<vector<int>> matrix, int i, int j) {
        set<int> s;
        while (i < matrix.size() && j < matrix[0].size()) {
            s.insert(matrix[i][j]);
            i++;
            j++;
        }
        return s.size() == 1;
    }
};



int main() {
    vector<int> v1{1,2,3,4};
    vector<int> v2{5,1,2,3};
    vector<int> v3{9,5,1,2};
    vector<vector<int>> matrix;

    matrix.push_back(v1);
    matrix.push_back(v2);
    matrix.push_back(v3);
    Solution s;
    PrintBool(s.isToeplitzMatrix(matrix));
}