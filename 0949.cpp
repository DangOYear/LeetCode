//
// Created by ShengyunYu on 2019/5/4.
//

#include "common.h"


class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        int time = -1;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                if (j != i)
                for (int k = 0; k < 4; ++k) {
                    if (k != i && k != j){
                        int l = 0 + 1 + 2 + 3 - i -j - k;
                        int hour = 10 * A[i] + A[j];
                        int mins = 10 * A[k] + A[l];
                        if (hour < 24 && mins < 60){
                            time = max(time, 60 * hour + mins);
                        }
                    }

                }
            }
        }

        return time >= 0 ? timeFormat(time):"";
    }

    string timeFormat(int time){
        string res = "";
        if (time / 60 < 10)
            res += "0";
        res += to_string(time/60);
        res += ":";
        if (time % 60 < 10)
            res += "0";
        res += to_string(time % 60);
        return res;
    }
};




int main(){
    vector<int> v{1,2,3,4};
    Solution s;
    cout << s.largestTimeFromDigits(v);
}