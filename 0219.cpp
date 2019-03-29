//
// Created by ShengyunYu on 2019/3/29.
//

#include "common.h"


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        bool flag = false;
        for (int i = 1; i <= nums.size(); ++i) {
            if (m[nums[i-1]] != 0){
                flag = (i - m[nums[i-1]]) <= k;
            }
            if (flag)
                return flag;
            else{
                m[nums[i-1]] = i;
            }
        }
        return flag;
    }
};


int main(){
    vector<int> num{1,2,3,1};
    int k = 3;
    Solution s;
    cout << s.containsNearbyDuplicate(num, k) << endl;
}