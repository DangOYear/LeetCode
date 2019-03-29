//
// Created by ShengyunYu on 2019/3/29.
//

#include "common.h"

class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = 0;
        for (int i = 0; i < s.length(); ++i) {
            c ^= s[i];
        }
        for (int j = 0; j < t.length(); ++j) {
            c ^= t[j];
        }
        return c;
    }
};



int main(){
    string s = "abcd";
    string t = "abcde";
    Solution m;
    cout << m.findTheDifference(s, t) << endl;

}