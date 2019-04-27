//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int i = 0;
        int N = A.size() - 1;
        while (i + 1 <= N && A[i] < A[i + 1])
            ++i;
        return i;
    }
};


int main(){
    vector<int> A{0,2,1,0};
    Solution s;
    cout << s.peakIndexInMountainArray(A) << endl;
}