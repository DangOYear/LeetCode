//
// Created by ShengyunYu on 2019/9/16.
//

#include "common.h"


class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        set<int> s;
        for (int day:days) {
            s.insert(day);
        }
        vector<int> res(days[days.size() - 1] + 1, 0);
        res[0] = 0;
        for (int i = 1; i < res.size(); ++i) {
            if (s.count(i) == 0) {
                res[i] = res[i-1];
                continue;
            }
            res[i] = res[i-1] + costs[0];
            res[i] = min(res[i], res[max(0, i - 7)] + costs[1]);
            res[i] = min(res[i], res[max(0, i - 30)] + costs[2]);

        }
        return res[res.size() - 1];
    }
};


int main() {
    vector<int> days{1,2,3,4,5,6,7,8,9,10,30,31};
    vector<int> costs{2,7,15};
    Solution solution;

    cout << solution.mincostTickets(days, costs);
}