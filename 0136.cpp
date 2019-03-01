//
// Created by ShengyunYu on 2019/2/4.
//

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); ++i) {
            res ^= nums[i];
        }
        return res;
    }
};




int main(){
    Solution s;
    vector<int> num1{2,2,1};
    vector<int> num2{4,1,2,1,2};
    cout << s.singleNumber(num1) << endl;

    cout << s.singleNumber(num2) << endl;

}