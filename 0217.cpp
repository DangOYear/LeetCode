//
// Created by ShengyunYu on 2019/3/29.
//

#include "common.h"


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        bool flag = false;
        for (int i = 0; i < nums.size(); ++i) {
            if (s.count(nums[i])){
                flag = true;
                break;
            }
            s.insert(nums[i]);
        }
        return flag;
    }
};



int main(){



}