//
// Created by ShengyunYu on 2019/2/26.
//

#include "common.h"


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = nums.size();
        for (int i = 0; i < nums.size(); ++i) {
            missing ^= i ^ nums[i];
        }
        return missing;
    }
};


int main(){
    Solution s;
    vector<int> v{9,6,4,2,3,5,7,0,1};
    cout << s.missingNumber(v) << endl;
}