//
// Created by ShengyunYu on 2019/7/19.
//

#include "common.h"

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int count[1001];
        memset(count, 0, sizeof(count));

        for (int i = 0; i < trips.size(); ++i) {
            count[trips[i][1]] += trips[i][0];
            count[trips[i][2]] -= trips[i][0];
        }

        for (int j = 0; j < 1001; ++j) {
            if (j == 0) {
                if (count[j] > capacity)
                    return false;
                continue;
            }
            count[j] += count[j - 1];
            if (count[j] > capacity)
                return false;
        }
        return true;
    }
};


int main() {
    Solution s;
    vector<vector<int>> trips{{2,1,5},{3,3,7}};
    int capacity = 4;
    PrintBool(s.carPooling(trips, capacity));
}