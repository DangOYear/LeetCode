//
// Created by ShengyunYu on 2019/9/13.
//

#include "common.h"

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) {
        vector<vector<int>> res;
        int step = 1;
        while (res.size() < R * C) {
            for (int i = 0; i < step; ++i) add(R, C, r0, c0++, res);
            for (int i = 0; i < step; ++i) add(R, C, r0++, c0, res);
            ++step;
            for (int i = 0; i < step; ++i) add(R, C, r0, c0--, res);
            for (int i = 0; i < step; ++i) add(R, C, r0--, c0, res);
            ++step;
        }
        return res;
    }
    void add(int R, int C, int x, int y, vector<vector<int>>& res) {
        if (x >= 0 && x < R && y >= 0 && y < C) res.push_back({x, y});
    }
};

int main() {

}