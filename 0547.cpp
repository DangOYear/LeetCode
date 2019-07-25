//
// Created by ShengyunYu on 2019/7/25.
//

#include "common.h"

class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        init();
        int row = M.size();
        int col = row == 0 ? 0:M[0].size();
        int res = 0;
        for (int i = 0; i < row - 1; ++i) {
            for (int j = i + 1; j < col; ++j) {
                if (M[i][j] == 1) {
                    Union(i, j);
                }
            }
        }

        for (int k = 0; k < row; ++k) {
            if (k == father[k]) {
                ++res;
            }
        }
        return res;
    }

    int findFather(int x) {
        while (x != father[x]) {
            x = father[x];
        }
        return x;
    }


    void Union(int x, int y) {
        int fx = findFather(x);
        int fy = findFather(y);
        if (fx != fy)
            father[fx] = fy;
    }

    void init() {
        for (int i = 0; i < 210; ++i) {
            father[i] = i;
        }
    }

private:
    int father[210];
};


int main() {
    vector<vector<int>> M{{1,1,0},{1,1,0},{0,0,1}};
    Solution solution;
    cout << solution.findCircleNum(M);
}