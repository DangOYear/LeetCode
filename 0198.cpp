//
// Created by ShengyunYu on 2019/2/28.
//

#include "common.h"

class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if (0 == len)
            return 0;
        if (1 == len)
            return nums[0];
        int dp[len + 2];
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < len; ++i) {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        return dp[len - 1];
    }
};

int main(){
    Solution s;
    vector<int> nums{2,1,1,2};
    cout << s.rob(nums) << endl;
}