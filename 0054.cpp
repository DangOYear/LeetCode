//
// Created by ShengyunYu on 2019/7/9.
//

#include "common.h"

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.size() == 0)
            return res;
        fill(0, 0, matrix.size() - 1, matrix[0].size() - 1, res, matrix, 1);

        return res;
    }

    void fill(int left_i, int left_j, int right_i, int right_j, vector<int> &res, vector<vector<int>> &matrix, int num) {
        if (num > matrix.size() * matrix[0].size())
            return;

//        if (left_i == right_i && left_j == right_j) {
//            res.push_back(matrix[left_i][right_i]);
//            //cout << "1: " << matrix[left_i][right_i] << endl;
//            return;
//        }

        for (int j = left_j; j <= right_j; ++j) {
            res.push_back(matrix[left_i][j]);
            //cout << "2: " << matrix[left_i][j] << endl;
            ++num;
        }

        for (int i = left_i + 1; i <= right_i; ++i) {
            res.push_back(matrix[i][right_j]);
            //cout << "3: " << matrix[i][right_j] << endl;
            ++num;
        }

        for (int j = right_j - 1; j >= left_j; --j) {
            if (left_i == right_i)
                break;
            res.push_back(matrix[right_i][j]);
            //cout << "4: " << matrix[right_i][j] << endl;
            ++num;
        }

        for (int i = right_i - 1 ; i >= left_i + 1; --i) {
            if (left_j == right_j)
                break;
            res.push_back(matrix[i][left_j]);
            //cout << "5: " << matrix[i][left_j] << endl;
            ++num;
        }
        fill(left_i + 1, left_j + 1, right_i - 1, right_j - 1, res, matrix, num);
    }



};

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution s;
    PrintIntVector(s.spiralOrder(matrix));
}