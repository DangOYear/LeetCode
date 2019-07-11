//
// Created by ShengyunYu on 2019/7/11.
//

#include "common.h"

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int arrLen = arr.size();
        int slow = 0;
        int fast = 0;
        while (fast < arrLen) {
            if (arr[slow] == 0)
                ++fast;
            ++slow;
            ++fast;
        }

        --slow;
        --fast;

        while (slow >= 0) {
            if (fast < arrLen)
                arr[fast] = arr[slow];

            if (arr[slow] == 0)
                arr[--fast] = arr[slow];

            --fast;
            --slow;
        }
    }
};


int main() {
    vector<int> num{1,0,2,3,0,4,5,0};

    Solution s;

    s.duplicateZeros(num);
    PrintIntVector(num);



}
