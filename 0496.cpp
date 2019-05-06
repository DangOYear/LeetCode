//
// Created by ShengyunYu on 2019/5/4.
//



#include "common.h"


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        set<int> sNum1;
        map<int, int> mNum1;
        vector<int> res = nums1;
        for (int i = 0; i < nums1.size(); ++i) {
            sNum1.insert(nums1[i]);
            mNum1[nums1[i]] = i;
        }

        for (int j = 0; j < nums2.size(); ++j) {
            if (sNum1.count(nums2[j])) {
                int i;
                for (i = j; i < nums2.size(); ++i) {
                    if (nums2[i] > nums2[j]) {
                        res[mNum1[nums2[j]]] = nums2[i];
                        break;
                    }
                }
                if (i == nums2.size())
                    res[mNum1[nums2[j]]] = -1;
            }
        }
        return res;
    }
};


void Print(vector<int> res) {
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> nums1{4,1,2};
    vector<int> nums2{1,3,4,2};
    Solution s;
    Print(s.nextGreaterElement(nums1, nums2));

    vector<int> nums3{2,4};
    vector<int> nums4{1,2,3,4};
    Print(s.nextGreaterElement(nums3, nums4));
}