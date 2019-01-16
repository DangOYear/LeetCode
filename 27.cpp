//
// Created by 虞圣赟 on 2019/1/16.
//

#include "common.h"


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                k++;
            }
            else
                nums[i-k] = nums[i];
        }
        return nums.size() - k;
    }
};


int main(){
    Solution s;
    vector<int> num1{3,2,2,3};
    vector<int> num2{0,1,2,2,3,0,4,2};
    cout << s.removeElement(num1,3) << endl;
    cout << s.removeElement(num2,2) << endl;
}