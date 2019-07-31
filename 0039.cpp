//
// Created by ShengyunYu on 2019/7/31.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> out;
        int sum = 0;
        backstrace(0, target, sum, candidates, out, res);
        return res;
    }

    void backstrace(int pos, int target, int sum, vector<int> candidates, vector<int>& out, vector<vector<int>>& res) {
        if (target == sum) {
            res.push_back(out);
        }
        if (sum > target)
            return;

        for (int i = pos; i < candidates.size(); ++i) {
            out.push_back(candidates[i]);
            backstrace(i, target, sum + candidates[i], candidates, out, res);
            out.pop_back();
        }
    }
};

int main() {
    Solution solution;
    vector<int> candidates1{2, 3, 6, 7};
    int target = 7;
    PrintIntVectorVector(solution.combinationSum(candidates1, target));

    vector<int> candidates2{2, 3, 5};
    target = 8;
    PrintIntVectorVector(solution.combinationSum(candidates2, target));
}