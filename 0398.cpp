//
// Created by ShengyunYu on 2019/7/20.
//

#include "common.h"

class Solution {
public:
    Solution(vector<int>& nums) {

        this->nums.assign(nums.begin(), nums.end());
        srand(time(NULL));
    }

    int pick(int target) {
        int firstTargetIndex = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) {
                firstTargetIndex = i;
                break;
            }
        }
        int result = firstTargetIndex;
        int count = 0;
        for (int j = firstTargetIndex + 1; j < nums.size(); ++j) {
            if (nums[j] == target) {
                count++;
                if(rand() % (count + 1) == 0){
                    result = j;
                }
            }
        }
        return result;
    }

private:
    vector<int> nums;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */

int main() {
    vector<int> nums{1,2,3,3,3};
    Solution s(nums);
    int count[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < 30000; ++i) {
        count[s.pick(3)]++;

    }
    cout << count[2] << " " <<  count[3] << " " << count[4];
}
