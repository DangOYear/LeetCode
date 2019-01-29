//
// Created by ShengyunYu on 2019/1/29.
//

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        int i = 0;
        int j = 0;
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]){
                res.push_back(nums1[i]);
                ++i;
            } else{
                res.push_back(nums2[j]);
                ++j;
            }
        }
        while (i < m){
            res.push_back(nums1[i]);
            ++i;
        }
        while (j < n){
            res.push_back(nums2[j]);
            ++j;
        }
        nums1 = res;
    }
};


int main(){
    Solution s;
    vector<int> num1{1,2,3,0,0,0};
    vector<int> num2{2,5,6};
    int m = 3;
    int n = 3;
    s.merge(num1, m, num2, n);
}