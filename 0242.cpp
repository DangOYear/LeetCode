//
// Created by ShengyunYu on 2019/3/29.
//

#include "common.h"



class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        int hash[26] = {0};
        for (int i = 0; i < s.size(); ++i) {
            ++hash[s[i] - 'a'];
        }
        for (int j = 0; j < t.size(); ++j) {
            if (--hash[t[j] - 'a'] < 0) return false;
        }
        return true;
    }
};



int main(){

}