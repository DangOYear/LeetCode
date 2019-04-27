//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> res;
        int row = A[0].size();
        int col = A.size();
        for (int i = 0; i < row; ++i) {
            vector<int> Row;
            for (int j = 0; j < col; ++j) {
                Row.push_back(A[j][i]);
            }
            res.push_back(Row);
        }
        return res;
    }
};


void Print(vector<vector<int>> res){
    for (int i = 0; i < res.size(); ++i) {
        for (int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int>> A{{1,2,3},{4,5,6}};
    Solution s;
    Print(s.transpose(A));

}
