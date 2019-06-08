//
// Created by ShengyunYu on 2019/3/5.
//

#include "common.h"


class Solution {
public:
    string convertToTitle(int n) {
        char alpha[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        string title = "";
        while (n) {
            n--;
            title = alpha[n % 26] + title;
            n /= 26;
        }
        return title;
    }
};



int main(){
    Solution s;
    cout << s.convertToTitle(1) << endl;
    cout << s.convertToTitle(28) << endl;
    cout << s.convertToTitle(701) << endl;
}