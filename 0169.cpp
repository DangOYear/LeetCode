//
// Created by ShengyunYu on 2019/2/28.
//

#include "common.h"

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major;
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (count == 0){
                major = nums[i];
            }
            if (nums[i] == major){
                ++count;
            } else{
                --count;
            }

        }
        return major;
    }
};

int main(){
    vector<int> nums{3,2,3};
    Solution s;
    cout << s.majorityElement(nums) << endl;
}