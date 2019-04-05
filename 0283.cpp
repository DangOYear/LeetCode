//
// Created by ShengyunYu on 2019/4/4.
//

#include "common.h"



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (0 == nums[i]){
                count++;
                continue;
            }
            nums[i - count] = nums[i];
        }
        for (int j = nums.size() - count; j < nums.size(); ++j) {
            nums[j] = 0;
        }
    }
};


void Print(vector<int> nums){
    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << " ";
    }
}

int main(){
    vector<int> nums{0,1,0,3,12};
    Solution s;
    s.moveZeroes(nums);
    Print(nums);
}