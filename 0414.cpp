//
// Created by ShengyunYu on 2019/4/24.
//

#include "common.h"

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int> res;
        set<int> s;
        for (int i = 0; i < nums.size(); ++i) {
            s.insert(nums[i]);
        }
        for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {

            res.push(*it);
        }
        if (res.size() < 3){
            return res.top();
        }
        res.pop();
        res.pop();
        return res.top();
    }


};

int main(){
    vector<int> num{3, 2, 1};
    Solution s;
    cout << s.thirdMax(num) << endl;
}
