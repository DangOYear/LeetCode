//
// Created by 虞圣赟 on 2019/1/16.
//

#include "common.h"

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int cur = 0;
        for (int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[cur])
                continue;
            nums[++cur] = nums[i];
        }
        return ++cur;
    }
};

int main(){
    Solution s;
    vector<int> num1{1,1,2};
    vector<int> num2{0,0,1,1,1,2,2,3,3,4};
    cout << s.removeDuplicates(num1) << endl;
    cout << s.removeDuplicates(num2) << endl;
}


