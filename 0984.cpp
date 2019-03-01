//
// Created by ShengyunYu on 2019/3/1.
//

#include "common.h"


class Solution {
public:
    string strWithout3a3b(int A, int B) {
        bool writeA;
        string s = "";
        int len;
        while (A > 0 || B > 0){
            writeA = false;
            len = s.length();
            if (len >= 2&& s[len-1] == s[len-2]){
                if (s[len-1] == 'b')
                    writeA = true;
            } else{
                if (A >= B){
                    writeA = true;
                }
            }
            if (writeA){
                --A;
                s += 'a';
            } else{
                --B;
                s += 'b';
            }
        }
        return s;
    }
};

int main(){
    Solution s;
    cout << s.strWithout3a3b(4, 1);
}