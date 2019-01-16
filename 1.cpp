//
// Created by 虞圣赟 on 2019/1/14.
//

#include "common.h"


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            if (m.count(target - nums[i])) {
                return {m[target - nums[i]], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};


int result(vector<int> num){
    for(int i=0; i<num.size(); i++){
        cout<< num[i]<<" ";
    }
}


int main(int agrc, char **argv){
    Solution s;
    vector<int> num{3, 2, 4};
    int target = 6;
    result(s.twoSum(num, target));

}