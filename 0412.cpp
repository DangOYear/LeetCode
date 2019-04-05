//
// Created by ShengyunYu on 2019/4/5.
//

#include "common.h"


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for (int i = 1; i <= n; ++i) {
            string s = "";
            if (0 == i % 3) {
                s += "Fizz";
            }
            if (0 == i % 5){
                s += "Buzz";
            }
            if ( 0 != i % 3 && 0 != i % 5) {
                s = to_string(i);
            }

            res.push_back(s);
        }
        return res;
    }
};