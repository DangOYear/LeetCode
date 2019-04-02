//
// Created by ShengyunYu on 2019/4/2.
//

#include "common.h"


class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        for (int i = 0; i < s.length(); ++i) {
            if ((i == 0|| s[i-1] == ' ') && s[i] != ' ')
                count++;
        }
        return count;
    }
};




int main(){
    string s = "Hello, my name is John";
    Solution S;
    cout << S.countSegments(s) << endl;
}