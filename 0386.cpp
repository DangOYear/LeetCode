//
// Created by ShengyunYu on 2019/6/30.
//

#include "common.h"

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> str;
        vector<int> res;
        for (int i = 1; i <= n; ++i) {
            str.push_back(to_string(i));
        }
        sort(str.begin(), str.end());

        for (int j = 0; j < str.size(); ++j) {
            res.push_back(stoi(str[j]));
        }
        return res;
    }
};