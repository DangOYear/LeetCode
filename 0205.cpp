//
// Created by ShengyunYu on 2019/3/29.
//

#include "common.h"

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sa[256] = {0};
        int ta[256] = {0};

        for (int i = 0; i < s.size(); ++i) {
            if (sa[s[i]] != ta[t[i]]) return false;
            sa[s[i]] = i + 1;
            ta[t[i]] = i + 1;
        }
        return true;
    }
};





int main(){

}