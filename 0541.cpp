//
// Created by ShengyunYu on 2019/5/4.
//

#include "common.h"

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.length(); i += 2 * k) {
            int l = i;
            int m = min(l + k - 1, (int)s.length() - 1);
            while (l < m){
                char temp = s[l];
                s[l++] = s[m];
                s[m--] = temp;
            }
        }
        return s;
    }
};


int main(){
    string s = "abcdefg";
    Solution S;
    cout << S.reverseStr(s, 2);
}