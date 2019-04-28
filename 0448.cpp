//
// Created by ShengyunYu on 2019/4/3.
//
#include "common.h"


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            while (i + 1 != nums[i] && nums[nums[i] - 1] != nums[i])
                swap(&nums[nums[i] - 1], &nums[i]);
        }

        for (int j = 0; j < nums.size(); ++j) {
            if (j + 1 != nums[j])
                res.push_back(j + 1);
        }
        return res;
    }

    void swap(int* a, int* b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
};


void Print(vector<int> res){
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}

int main(){
    vector<int> nums{4,3,2,7,8,2,3,1};
    Solution s;
    Print(s.findDisappearedNumbers(nums));
}


