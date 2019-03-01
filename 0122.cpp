//
// Created by ShengyunYu on 2019/3/1.
//

#include "common.h"


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] - prices[i-1] > 0)
                res += prices[i] - prices[i-1];
        }
        return res;
    }
};


int main(){
    vector<int> v{7,6,4,3,1};

    Solution s;
    cout << s.maxProfit(v) << endl;


}