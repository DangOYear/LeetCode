//
// Created by ShengyunYu on 2019/5/12.
//

#include "common.h"


class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> res(2, 0);
        int Min = INT_MAX;
        int n = sqrt(area);
        int L = 0;
        for (int W = 1; W <= n; ++W) {
            if (area % W == 0) {
                L = area / W;
                if (L - W <= Min) {
                    Min = L - W;
                    res[0] = L;
                    res[1] = W;
                }
            }

        }

        return res;
    }
};

int main(){
    Solution s;
    vector<int> res = s.constructRectangle(4);
    cout << res[0] << " " << res[1];
}