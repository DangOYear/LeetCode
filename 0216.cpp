//
// Created by ShengyunYu on 2019/7/31.
//

#include "common.h"

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> out;
        int sum = 0;
        backstrace(k, 1, sum, n, out, res);
        return res;
    }
    void backstrace(int count, int pos, int sum, int n, vector<int>& out, vector<vector<int>>& res) {
        if (count == 0) {
            if (sum == n)
                res.push_back(out);
            return;
        }
        if (sum > n)
            return;

        for (int i = pos; i <= 9; ++i) {
            out.push_back(i);
            backstrace(count - 1, i + 1, sum + i, n, out, res);
            out.pop_back();
        }
    }

};

int main() {
    Solution solution;
    PrintIntVectorVector(solution.combinationSum3(3, 7));
    PrintIntVectorVector(solution.combinationSum3(3, 9));
}