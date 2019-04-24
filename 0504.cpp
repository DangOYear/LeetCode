//
// Created by ShengyunYu on 2019/4/24.
//

#include "common.h"


class Solution {
public:
    string convertToBase7(int num) {
        bool flag = false;
        string s = "";
        if (num == 0)
            return "0";
        if (num < 0){
            num = -num;
            flag = true;
        }
        while (num){
            s = to_string(num % 7) + s;
            num /= 7;
        }
        if (flag)
            s = "-" + s;
        return s;
    }
};


int main(int argc, char **argv){
    Solution s;
    cout << s.convertToBase7(-7) << endl;
}