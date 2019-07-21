//
// Created by ShengyunYu on 2019/6/30.
//

#include "common.h"


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> res(T.size(), 0);
        stack<int> s;
        for (int i = 0; i < T.size(); ++i) {
            while (!s.empty() && T[i] > T[s.top()]) {
                res[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }
        return res;
    }
};

int main() {
    vector<int> T{89,62,70,58,47,47,46,76,100,70};
    Solution solution;
    PrintIntVector(solution.dailyTemperatures(T));
}