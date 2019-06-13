//
// Created by ShengyunYu on 2019/6/13.
//

#include "common.h"


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res = nums;
        int mul = 1;
        for (int i = 0; i < nums.size(); ++i) {
            res[i] = mul;
            mul *= nums[i];

        }
        mul = 1;
        for (int i = nums.size() - 1; i >= 0; --i) {
            res[i] *= mul;
            mul *= nums[i];
        }
        return res;
    }
};

int main() {
    vector<int> v{1, 2, 3, 4};
    Solution s;
    PrintIntVector(s.productExceptSelf(v));
}