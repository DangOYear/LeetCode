//
// Created by ShengyunYu on 2019/5/4.
//

#include "common.h"

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> res;
        vector<int> sortedNum = nums;
        sort(sortedNum.begin(), sortedNum.end(), cmp);
        map<int, string> m;
        for (int i = 0; i < sortedNum.size(); ++i) {
            switch (i){
                case 0:
                    m[sortedNum[i]] = "Gold Medal";
                    break;
                case 1:
                    m[sortedNum[i]] = "Silver Medal";
                    break;
                case 2:
                    m[sortedNum[i]] = "Bronze Medal";
                    break;
                default:
                    m[sortedNum[i]] = to_string(i + 1);
            }
        }

        for (int j = 0; j < nums.size(); ++j) {
            res.push_back(m[nums[j]]);
        }
        return res;
    }

    static bool cmp(int num1, int num2) {
        return num1 > num2;
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