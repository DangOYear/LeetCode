//
// Created by ShengyunYu on 2019/4/24.
//

#include "common.h"

class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        bool flag = false;

        for (int i = 1; i < A.size(); ++i) {
            if (A[i] - A[i - 1] >= 0 && flag)
                return false;
            
        }
    }
};


int main(int argc, char ** argv){
    Solution s;
    vector<int> v{0,3,2,1};
    vector<int> v1{3,5,5};
    cout << s.validMountainArray(v) << endl;
}