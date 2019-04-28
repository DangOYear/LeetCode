//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> res;
        int low = 0, high = S.length();
        for (int i = 0; i < S.length(); ++i) {
            if (S[i] == 'I')
                res.push_back(low++);
            else
                res.push_back(high--);
        }
        res.push_back(low);
        return res;
    }
};

