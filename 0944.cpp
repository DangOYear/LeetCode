//
// Created by ShengyunYu on 2019/4/28.
//

#include "common.h"


class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int len = A[0].size();
        int count = 0;
        vector<int> origin;
        vector<int> sorted;
        for (int i = 0; i < len; ++i) {
            origin.clear();
            sorted.clear();
            for (int j = 0; j < A.size(); ++j) {
                origin.push_back(A[j][i]);
            }
            sorted = origin;
            sort(sorted.begin(), sorted.end());
            if (sorted != origin)
                ++count;
        }
        return count;
    }
};


int main(){
    vector<string> A{"cba","daf","ghi"};
    Solution s;
    cout << s.minDeletionSize(A);
}