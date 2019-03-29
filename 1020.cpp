//
// Created by ShengyunYu on 2019/3/27.
//

#include "common.h"


class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int value = 0;
        for (int i = 0; i < A.size(); ++i) {
            value += A[i];
        }
        if (value % 3 != 0)
            return false;
        else
            value /= 3;

        int temp = value;
        bool flag = true;
        int count = 0;
        int j;
        for (j = 0; j < A.size(); ++j) {
            temp -= A[j];
            if (temp == 0){
                temp = value;
                count++;
            }
        }
        if (count != 3 || !temp)
            return false;
        return true;
    }
};


int main(){
    vector<int> v{0,2,1,-6,6,7,9,-1,2,0,1};
    Solution s;
    cout << s.canThreePartsEqualSum(v) << endl;
}