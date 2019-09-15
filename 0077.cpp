//
// Created by ShengyunYu on 2019/6/30.
//

#include "common.h"



class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        res.clear();
        if (k > n)
            return res;
        backstrace({}, 1, n, k);
        return res;
    }


    void backstrace(vector<int> temp, int count, int n, int k) {
        if (temp.size() == k) {
            res.push_back(temp);
            return;
        }

        for (int i = count; i <= n; ++i) {
            temp.push_back(i);
            backstrace(temp, i + 1, n, k);
            temp.pop_back();
        }

    }

private:
    vector<vector<int>> res;
};


//
//Input: n = 4, k = 2
//Output:
//[
//[2,4],
//[3,4],
//[2,3],
//[1,2],
//[1,3],
//[1,4],
//]

int main(int argc, char **argv) {
    Solution solution;
    PrintIntVectorVector(solution.combine(4, 2));
}