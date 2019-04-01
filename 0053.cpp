//
// Created by ShengyunYu on 2019/4/1.
//

#include "common.h"


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN, sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum = nums[i] + (sum < 0 ? 0 : sum);
            max = sum > max ? sum : max;
        }
        return max;
    }
};



int main(){
    vector<int> v{-2,1,-3,4,-1,2,1,-5,4};
    Solution s;
    cout << s.maxSubArray(v) << endl;
}