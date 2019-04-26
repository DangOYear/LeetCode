//
// Created by ShengyunYu on 2019/4/26.
//

#include "common.h"


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid;
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high){
            mid = (low + high) / 2;
            if (nums[mid] == target) return mid;
            else {
                if (nums[mid] < target){
                    low = mid + 1;
                } else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};