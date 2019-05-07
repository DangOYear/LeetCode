//
// Created by ShengyunYu on 2019/5/7.
//

#include "common.h"


class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        map<int, int> count;
        int res = 0;
        for (int i = 0; i < time.size(); ++i) {
            time[i] %= 60;
            ++count[time[i]];
        }
        for (int j = 0; j < time.size(); ++j) {
            --count[time[j]];
            if (time[j] == 0) {
                res += count[0];
            } else{
                res += count[60 - time[j]];
            }
        }
        return res;
    }
};


int main(){
    vector<int> time1{30, 20, 150, 100, 40};
    Solution s;
    cout << s.numPairsDivisibleBy60(time1) << endl;
    vector<int> time2{60, 60, 60};
    cout << s.numPairsDivisibleBy60(time2) << endl;
}