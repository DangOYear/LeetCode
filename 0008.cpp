//
// Created by ShengyunYu on 2019/2/28.
//

#include "common.h"


class Solution {
public:
    int myAtoi(string str) {
        if (str.length() == 0) return 0;
        int sign = 1, res = 0, cur = 0, len = str.length();
        while (cur < len && str[cur] == ' ') ++cur;
        if (cur != len && (str[cur] == '+') || (str[cur] == '-')){
            sign = (str[cur++] == '+') ? 1 : -1;
        }
        while (cur < len && isDigit(str[cur])){
            if (res > INT32_MAX/10 || (res == INT32_MAX / 10 && str[cur] - '0' > 7)){
                return (sign == 1) ? INT32_MAX : INT32_MIN;
            }
            res = res * 10 + (str[cur++] - '0');
        }
        return res * sign;
    }
    bool isDigit(char c){
        if (c <= '9' && c>='0')
            return true;
        return false;
    }
};


int main(){
    Solution s;
    string c = "   -42";
    cout << s.myAtoi(c) << endl;
}