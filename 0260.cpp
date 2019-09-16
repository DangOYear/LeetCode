//
// Created by ShengyunYu on 2019/6/30.
//

#include "common.h"

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res(2, 0);
        int ret = 0;
        for (int num:nums) {
            ret ^= num;
        }
        int mask = 1;
        while ((ret & mask) == 0) {
            mask <<= 1;
            //cout << mask << endl;
        }

        for (int num:nums) {
            if (mask & num) {
                res[0] ^= num;
            } else{
                res[1] ^= num;
            }
        }
        return res;
    }
};
//
//Input:  [1,2,1,3,2,5]
//Output: [3,5]

int main() {
    vector<int> nums{1,2,1,3,2,5};
    Solution solution;
    PrintIntVector(solution.singleNumber(nums));
}