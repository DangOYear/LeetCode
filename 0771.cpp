//
// Created by ShengyunYu on 2019/4/25.
//

#include "common.h"

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> jewel;
        int res = 0;
        for (int i = 0; i < J.length(); ++i) {
            jewel.insert(J[i]);
        }
        for (int j = 0; j < S.length(); ++j) {
            if (jewel.count(S[j]))
                ++res;
        }
        return res;
    }
};

