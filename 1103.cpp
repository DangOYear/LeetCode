//
// Created by ShengyunYu on 2019/7/3.
//

#include "common.h"

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people, 0);
        int i;
        for (i = 0; candies > i; ++i) {
            res[i % num_people] += i + 1;
            candies -= (i + 1);
        }

        res[i % num_people] += candies;
        return res;
    }
};

int main() {
    Solution s;
    PrintIntVector(s.distributeCandies(90, 4));

}