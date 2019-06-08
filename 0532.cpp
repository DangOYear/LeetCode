//
// Created by ShengyunYu on 2019/6/8.
//

#include "common.h"

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
        map<int, int> numsMap;
        if (k < 0)
            return false;
        for (int i = 0; i < nums.size(); ++i) {
            numsMap[nums[i]]++;
        }

        if (k == 0) {
            for (auto it = numsMap.begin(); it != numsMap.end(); ++it) {
                if (it->second >= 2)
                    ++count;
            }
            return count;
        }

        for (auto it = numsMap.begin(); it != numsMap.end(); ++it) {
            if (numsMap.count(it->first + k))
                ++count;
        }
        return count;
    }
};

int main(){

}