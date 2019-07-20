//
// Created by ShengyunYu on 2019/7/19.
//

#include "common.h"

class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> res;
        for (int i = 0; i < 12; ++i) {
            for (int j = 0; j < 60; ++j) {
                if (count(i) + count(j) == num) {
                    res.push_back(to_string(i) + ":" + (j < 10 ? "0" + to_string(j) : to_string(j)));
                }
            }
        }
        return res;
    }

    int count(int n) {
        int res = 0;
        while (n != 0) {
            n = n & (n - 1);
            res++;
        }
        return res;
    }
};


int main() {
    Solution s;
    int n = 1;
    PrintStringVector(s.readBinaryWatch(1));
}