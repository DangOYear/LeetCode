//
// Created by ShengyunYu on 2019/2/26.
//

#include "common.h"

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        set<int> v;
        vector<int> vec;
        for (int i = 0; i < nums1.size(); ++i) {
            s.insert(nums1[i]);
        }
        for (int j = 0; j < nums2.size(); ++j) {
            if (s.count(nums2[j]))
                v.insert(nums2[j]);
        }
        for (set<int>::iterator it = v.begin(); it != v.end(); ++it) {
            vec.push_back(*it);
        }
        return vec;
    }
};


void Print(vector<int> v){
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    Solution s;
    vector<int> nums1{1,2,2,1};
    vector<int> nums2{2,2};


}