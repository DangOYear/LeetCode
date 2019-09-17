//
// Created by ShengyunYu on 2019/9/17.
//

#include "common.h"

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permuteDFS(res, nums, 0);
        return res;
    }

    void permuteDFS(vector<vector<int>> &res, vector<int>& nums, int start) {
        if (start == nums.size()) {
            res.push_back(nums);
        }

        for (int i = start; i < nums.size(); ++i) {
            swap(nums[start], nums[i]);
            permuteDFS(res, nums, start + 1);
            swap(nums[i], nums[start]);
        }
    }

};

//Input: [1,2,3]
//Output:
//[
//[1,2,3],
//[1,3,2],
//[2,1,3],
//[2,3,1],
//[3,1,2],
//[3,2,1]
//]

int main() {
    Solution solution;
    vector<int> nums{1, 2, 3};
    PrintIntVectorVector(solution.permute(nums));
}