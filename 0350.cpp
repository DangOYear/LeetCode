//
// Created by ShengyunYu on 2019/4/26.
//

#include "common.h"



class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        map<int, int> hash;
        for (int i = 0; i < nums1.size(); ++i) {
            ++hash[nums1[i]];
        }
        for (int j = 0; j < nums2.size(); ++j) {
            if (hash[nums2[j]]){
                res.push_back(nums2[j]);
                --hash[nums2[j]];
            }
        }
        return res;
    }
};