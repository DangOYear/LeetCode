//
// Created by ShengyunYu on 2019/5/4.
//

#include "common.h"

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {

    }
};

void Print(vector<string> res) {
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}


int main(){
    Solution s;
    vector<int> nums{5, 4, 3, 2, 1};
    Print(s.findRelativeRanks(nums));
}