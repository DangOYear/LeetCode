//
// Created by ShengyunYu on 2019/9/11.
//

#include "common.h"


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int low = 1;
        int high = pow(10, 9);
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (solve(piles, H, mid)) {
                high = mid;
            } else{
                low = mid + 1;
            }
        }
        return low;
    }

    bool solve(vector<int> piles, int H, int K){
        int count = 0;
        for (int num:piles) {
            count += (num - 1) / K + 1;
        }
        return count <= H;
    }
};


int main() {
    Solution solution;
    vector<int> piles{3,6,7,11};
    int H = 8;
    cout << solution.minEatingSpeed(piles, H);
}