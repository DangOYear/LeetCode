//
// Created by ShengyunYu on 2019/3/5.
//

#include "common.h"


class Solution {
public:
    string convertToTitle(int n) {
        string s = "";
        while (n){
            int r = n % 26;
            n = n / 26;
            if (r == 0){
                s += 'Z';
                n--;
            } else{
                s += char('A' + r - 1);
            }
        }

        string res = "";
        for (int i = s.size() - 1; i >= 0; --i) {
            res += res[i];
        }
        return res;
    }
};



int main(){
    Solution s;
    cout << s.convertToTitle(701) << endl;
}