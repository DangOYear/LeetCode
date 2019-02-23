//
// Created by ShengyunYu on 2019/2/4.
//

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int min = 0;
        if (prices.size() == 0)
            return 0;
        min = prices[0];
        for (int i = 1; i < prices.size(); ++i) {
            if ((prices[i] - min) > res)    res = prices[i] - min;
            if (prices[i] < min)    min = prices[i];
        }
        return res;
    }
};


int main(){
    Solution s;
    vector<int> num1{7,1,5,3,6,4};
    vector<int> num2{7,6,4,3,1};
    cout << s.maxProfit(num1) << endl;
    cout << s.maxProfit(num2) << endl;
}