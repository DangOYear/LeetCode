//
// Created by ShengyunYu on 2019/7/21.
//

#include "common.h"

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        if (nums.size() == 0)
            return {};
        vector<int> res(nums.size(), -1);

        stack<int> s;
        for (int i = 0; i < nums.size() * 2 - 1; ++i) {
            while (!s.empty() && nums[i % nums.size()] > nums[s.top()]) {

                res[s.top()] = nums[i % nums.size()];
                s.pop();
            }
            s.push(i % nums.size());
        }
        return res;
    }
};

int main() {
    Solution solution;
    vector<int> nums;
    PrintIntVector(solution.nextGreaterElements(nums));
}