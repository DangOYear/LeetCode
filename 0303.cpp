//
// Created by ShengyunYu on 2019/4/2.
//

#include "common.h"


class NumArray {
public:
    NumArray(vector<int>& nums) {

    }

    int sumRange(int i, int j) {
        int sum = 0;
        for (int k = i; k <= j; ++k) {
            sum += data[k];
        }
        return sum;
    }

private:
    vector<int> sum;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */


