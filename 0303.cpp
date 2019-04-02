//
// Created by ShengyunYu on 2019/4/2.
//

#include "common.h"


class NumArray {
public:
    NumArray(const vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            data.push_back(nums[i]);
        }
    }

    int sumRange(int i, int j) {
        int sum = 0;
        for (int k = i; k <= j; ++k) {
            sum += data[k];
        }
        return sum;
    }

private:
    vector<int> data;
};


int main(){
    vector<int> nums{-2, 0, 3, -5, 2, -1};
    NumArray* obj = new NumArray(nums);
    cout << obj->sumRange(0, 2) << endl;
    cout << obj->sumRange(2, 5) << endl;
    cout << obj->sumRange(0, 5) << endl;
}
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */


