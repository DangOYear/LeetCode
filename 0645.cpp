//
// Created by ShengyunYu on 2019/5/13.
//

#include "common.h"


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        int missingNum = -1;
        int n = nums.size();
        //int firstOccur = -1;
        int sum = 0;
        set<int> num;
        for (int i = 0; i < n; ++i) {
            sum += nums[i];

            if (num.count(nums[i])) {
                res.push_back(nums[i]);
            }
            num.insert(nums[i]);
        }
        missingNum = (1 + n) * n / 2 - sum + res[0];

        res.push_back(missingNum);
        return res;
    }
};


int main(){
    Solution s;
    vector<int> nums{2, 2};
    vector<int> res = s.findErrorNums(nums);
    cout << res[0] << " " << res[1];
}