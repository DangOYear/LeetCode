//
// Created by ShengyunYu on 2019/6/10.
//

#include "common.h"


class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream is(text);
        string temp;
        int flag = 0;
        vector<string> res;
        while (is >> temp) {
            if (flag == 2) res.push_back(temp);
            if (temp == first)
                flag = 1;
            else {
                if (flag == 1 && second == temp) {
                    flag = 2;
                } else {
                    flag = 0;
                }
            }
        }
        return res;
    }
};


