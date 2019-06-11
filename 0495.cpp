//
// Created by ShengyunYu on 2019/6/11.
//

#include "common.h"


class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int time = 0;
        for (int i = 0; i < timeSeries.size(); ++i) {
            time += duration;
            //cout << timeSeries[i] << " " << timeSeries[i + 1] << " " << duration << endl;
            if (i + 1 < timeSeries.size() && timeSeries[i + 1] <= timeSeries[i] + duration)
                time -= (timeSeries[i] + duration - timeSeries[i + 1]);
        }
        return time;
    }
};


int main() {
    Solution s;


    vector<int> timeSeries{1, 4};
    int duration = 2;

    cout << s.findPoisonedDuration(timeSeries, duration) << endl;


    vector<int> timeSeries2{1, 2};
    cout << s.findPoisonedDuration(timeSeries2, 2) << endl;
}