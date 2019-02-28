//
// Created by ShengyunYu on 2019/2/28.
//

#include "common.h"

class Solution {
public:
    int rob(vector<int>& nums) {
        int odd = 0;
        int even = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (i % 2 == 1)
                odd += nums[i];
            else
                even += nums[i];
        }
        return max(odd, even);
    }
};

int main(){
    Solution s;
    vector<int> nums{2,7,9,3,1};
    cout << s.rob(nums) << endl;
}