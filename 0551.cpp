//
// Created by ShengyunYu on 2019/5/4.
//

#include "common.h"

class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0;
        int countL = 0;
        for (int i = 0; i < s.length(); ++i) {
            switch (s[i]){
                case 'A':
                    ++countA;
                    countL = 0;
                    if (countA >= 2)
                        return false;
                    break;
                case 'L':
                    ++countL;
                    if (countL >= 3)
                        return false;
                    break;
                default:
                    countL = 0;
                    break;
            }
        }
        return true;
    }
};

int main(){
    string s = "LPLPLPLPLPL";
    Solution S;
    if (S.checkRecord(s))
        cout << "true";
    else
        cout << "false";
}