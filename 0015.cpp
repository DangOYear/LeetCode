//
// Created by ShengyunYu on 2019/10/13.
//

#include "common.h"

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());//排序
        int size = nums.size();
        for (int i = 0; i < size - 2; ++i) {
            if (nums[i] > 0)
                break;
            if (i != 0 && nums[i] == nums[i-1])
                continue;
            unordered_map<int, int> m;
            set<int> s;
            int target = - nums[i];
            for (int j = i + 1; j < nums.size(); ++j) {
                if (s.count(nums[j]))
                    continue;
                if (m.count(target - nums[j])) {
                    s.insert(target - nums[j]);
                    s.insert(nums[j]);
                    vector<int> temp{nums[i], target - nums[j], nums[j]};
                    res.push_back(temp);
                }
                m[nums[j]]++;
            }
        }
        return res;
    }
};


int main() {
    vector<int> nums{-1, 0, 1, 2, -1, -4};
    Solution solution;

    PrintIntVectorVector(solution.threeSum(nums));

    vector<int> num{0,0,0,0};
    PrintIntVectorVector(solution.threeSum(num));
}