//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"


class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        int evenSum = 0;
        vector<int> res;
        for (int i = 0; i < A.size(); ++i) {
            if (isEven(A[i]))
                evenSum += A[i];
        }
        for (int j = 0; j < queries.size(); ++j) {
            if (isEven(A[queries[j][1]])){
                evenSum -= A[queries[j][1]];
            }
            A[queries[j][1]] = A[queries[j][1]] + queries[j][0];
            if (isEven(A[queries[j][1]]))
                evenSum += A[queries[j][1]];
            res.push_back(evenSum);
        }
        return res;
    }

    bool isEven(int num){
        if (num % 2 == 0)
            return true;
        return false;
    }
};


void Print(vector<int> res){
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}

int main(){
    vector<int> A = {1,2,3,4};
    vector<vector<int>> queries{{1,0},{-3,1},{-4,0},{2,3}};
    Solution s;
    Print(s.sumEvenAfterQueries(A, queries));
}