//
// Created by ShengyunYu on 2019/4/28.
//
#include "common.h"




class Solution {
public:
    int binaryGap(int N) {
        int gap[33];
        int maxGap = 0;
        int countOne = 0;
        int i = 0;
        while (N){
            if (N % 2 == 1){
                gap[countOne++] = i;
            }
            i++;
            N /= 2;
        }
        for (int j = 0; j < countOne - 1; ++j) {
            maxGap = max(maxGap, gap[j + 1] - gap[j]);
        }
        return maxGap;
    }
};



int main(){
    Solution s;
    cout << s.binaryGap(22) << endl;
    cout << s.binaryGap(5) << endl;
    cout << s.binaryGap(6) << endl;
    cout << s.binaryGap(8) << endl;
}