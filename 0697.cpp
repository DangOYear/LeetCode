//
// Created by ShengyunYu on 2019/4/28.
//

#include "common.h"


class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if (nums.size() == 1)
            return 1;
        map<int, int> left;
        map<int, int> right;
        map<int, int> count;
        int Max = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (left[nums[i]] == 0) {
                left[nums[i]] = i + 1;
            } else{
                right[nums[i]] = i + 1;
            }
            ++count[nums[i]];
            Max = max(count[nums[i]], Max);
        }

        int Min = nums.size();
        for (auto it = count.begin(); it != count.end(); ++it) {
            if (it->second == Max)
                Min = min(Min, right[it->first] - left[it->first] + 1);
        }
        return Min;
    }
};

int main(){
    vector<int> nums{1,2,2,3,1,4,2};
    Solution s;
    cout << s.findShortestSubArray(nums) << endl;
}