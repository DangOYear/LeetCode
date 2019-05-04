//
// Created by ShengyunYu on 2019/5/4.
//

#include "common.h"

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        set<string> list;
        vector<string> common;
        vector<string> minIndexCommon;
        map<string, int> mList1;
        map<string, int> mList2;
        int minIndex = INT_MAX;
        for (int i = 0; i < list1.size(); ++i) {
            list.insert(list1[i]);
            mList1[list1[i]] = i;
        }
        for (int j = 0; j < list2.size(); ++j) {
            mList2[list2[j]] = j;
            if (list.count(list2[j])) {
                common.push_back(list2[j]);
                minIndex = min(minIndex, mList1[list2[j]] + mList2[list2[j]]);
            }
        }

        for (int k = 0; k < common.size(); ++k) {
            if (mList1[common[k]] + mList2[common[k]] == minIndex)
                minIndexCommon.push_back(common[k]);
        }

        return minIndexCommon;
    }
};

void Print(vector<string> res){
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}

int main(){
    vector<string> list1{"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> list2{"KFC","Shogun","Burger King"};
    Solution s;
    Print(s.findRestaurant(list1, list2));
}