//
// Created by ShengyunYu on 2019/7/21.
//

#include "common.h"


class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int count = 0;
        for (int i = 0; i < pushed.size(); ++i) {
            s.push(pushed[i]);
            while (!s.empty() && s.top() == popped[count]) {
                s.pop();
                ++count;
            }

        }
        return s.empty() && count == popped.size();
    }
};


int main() {
    vector<int> pushed = {1,2,3,4,5};
    vector<int> popped = {4,3,5,1,2};
    Solution solution;
    PrintBool(solution.validateStackSequences(pushed, popped));
}