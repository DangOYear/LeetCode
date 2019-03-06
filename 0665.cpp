//
// Created by ShengyunYu on 2019/3/3.
//

#include "common.h"


class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool flag = true;
        int count = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] > nums[i + 1]){

            }
        }
    }
};


int main(){
    Solution s;
    vector<int> v{4,2,1};
    cout << s.checkPossibility(v) << endl;
}