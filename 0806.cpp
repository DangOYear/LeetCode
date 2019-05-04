//
// Created by ShengyunYu on 2019/5/4.
//

#include "common.h"

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int lineNum = 1;
        int width = 0;
        for (int i = 0; i < S.length(); ++i) {
            int w = widths[(int)(S[i] - 'a')];
            width += w;
            if (width > 100){
                lineNum++;
                width = w;
            }
        }
        return {lineNum, width};
    }
};

void Print(vector<int> res){
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}

int main(){
    vector<int> widths = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    string S = "abcdefghijklmnopqrstuvwxyz";
    Solution s;
    Print(s.numberOfLines(widths, S));
}