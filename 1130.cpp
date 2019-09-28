//
// Created by ShengyunYu on 2019/8/21.
//

#include "common.h"



class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        if (arr.size() < 2)
            return 0;
        int res = 0;
        stack<int> s;
        s.push(INT_MAX);

        for (int num:arr) {
            while (s.top() <= num) {
                int mid = s.top();
                s.pop();
                res += mid * min(s.top(), num);
            }
            s.push(num);
        }
        while (s.size() > 2) {
            int mid = s.top();
            s.pop();
            res += mid * s.top();
        }
        return res;
    }
};


int main() {
    vector<int> vec{6, 2, 4};
    Solution solution;
    cout << solution.mctFromLeafValues(vec) << endl;
}