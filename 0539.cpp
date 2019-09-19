//
// Created by ShengyunYu on 2019/9/19.
//

#include "common.h"


class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int res = INT_MAX;
        vector<int> timeMinutes;
        for (string time:timePoints) {
            int minutes = stoi(time.substr(0, time.find(':'))) * 60 + stoi(time.substr(time.find(':') + 1));
            timeMinutes.push_back(minutes);
        }
        sort(timeMinutes.begin(), timeMinutes.end());
        timeMinutes.push_back(timeMinutes[0] + 24 * 60);

        for (int i = 1; i < timeMinutes.size(); ++i) {
            res = min(timeMinutes[i] - timeMinutes[i-1], res);
        }
        return res;
    }
};


int main() {
    vector<string> timePoints{"23:59","00:00"};

    Solution solution;

    cout << solution.findMinDifference(timePoints);
}