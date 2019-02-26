//
// Created by ShengyunYu on 2019/2/26.
//


//fail
#include "common.h"

int guess(int num){
    int pick = 6;
    if (num == pick)
        return 0;
    if (num < pick)
        return -1;
    return 1;
}

class Solution {
public:
    int guessNumber(int n) {
        int high = n;
        int low = 1;
        //int mid = (high + low) / 2;
        int mid;
        while (low <= high){
            mid = (high + low) / 2;
            int g = guess(mid);
            if (g == 0)
                return mid;
            if (g == 1){
                high = mid - 1;
            }
            if (g == -1){
                low = mid + 1;
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    cout << s.guessNumber(10) << endl;
}