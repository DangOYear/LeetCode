//
// Created by 虞圣赟 on 2019/1/16.
//

#include "common.h"


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid = 0;
        while (left <= right){
            mid = (left + right) / 2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return left;
    }
};

int main(){
    Solution s;
    vector<int> nums1{1,3,5,6};
    vector<int> nums2{1,3,5,6};
    vector<int> nums3{1,3,5,6};
    vector<int> nums4{1,3,5,6};
    cout << s.searchInsert(nums1, 5) <<endl;
    cout << s.searchInsert(nums2, 2) <<endl;
    cout << s.searchInsert(nums3, 7) <<endl;
    cout << s.searchInsert(nums4, 0) <<endl;
}