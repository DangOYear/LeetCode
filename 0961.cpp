//
// Created by ShengyunYu on 2019/3/1.
//

#include "common.h"


class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map<int, int> m;
        int res ;
        for (int i = 0; i < A.size(); ++i) {
            m[A[i]]++;
            if (m[A[i]] > 1){
                res = A[i];
                break;
            }
        }
        return res;
    }
};

int main(){
    vector<int> A{1,2,3,3};
    Solution s;
    cout << s.repeatedNTimes(A) << endl;
}