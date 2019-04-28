//
// Created by ShengyunYu on 2019/4/28.
//
#include "common.h"

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int start = -1;
        int res = 0;
        for (int i = 0; i < nums.size(); ++i) {
            start = i;
            while (i < nums.size() && nums[i] == 1){
                i++;
            }
            res = max(res, i - start);
        }
        return res;
    }
};


int main(){
    vector<int> nums{1,1,0,1,1,1};
    Solution s;
    cout << s.findMaxConsecutiveOnes(nums) << endl;
}