//
// Created by ShengyunYu on 2019/9/9.
//

#include "common.h"


class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int distanceClockwise = 0;
        int distanceCounterclockwise = 0;
        if (start > destination)
            swap(start, destination);

        for (int i = 0; i < distance.size(); ++i) {
            if (i >= start && i < destination)
                distanceClockwise += distance[i];
            else
                distanceCounterclockwise += distance[i];
        }
        return min(distanceClockwise, distanceCounterclockwise);
    }
};


int main() {
    vector<int> distance{1,2,3,4};
    int start = 0;
    int destination = 1;
    Solution solution;
    //distance = [1,2,3,4], start = 0, destination = 1
    // 1
    cout << solution.distanceBetweenBusStops(distance, start, destination);
}