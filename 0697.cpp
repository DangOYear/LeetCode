//
// Created by ShengyunYu on 2019/4/28.
//

#include "common.h"


class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, pair<int, int>> m;
        map<int, int> count;
        vector<int> Max;
        int res = INT_MAX;
        int maxDegree = INT_MIN;
        for (int i = 0; i < nums.size(); ++i) {
            if (m.count(nums[i]) == 0) {
                m[nums[i]] = make_pair(i, i);
            } else{
                m[nums[i]].second = i;
            }

            count[nums[i]]++;
        }

        for (auto it = count.begin(); it != count.end(); ++it) {
            
            if (it->second == maxDegree) {
                Max.push_back(it->first);
            }
            
            if (it->second > maxDegree) {
                Max.clear();
                maxDegree = it->second;
                Max.push_back(it->first);
            }
            
        }
        for (int j = 0; j < Max.size(); ++j) {
            res = min(res, m[Max[j]].second - m[Max[j]].first + 1);
        }
        return res;
    }
};

int main(){
    vector<int> nums{1};
    Solution s;
    cout << s.findShortestSubArray(nums) << endl;

    vector<int> num1{1,2,2,3,1,4,2};
    cout << s.findShortestSubArray(num1) << endl;
}