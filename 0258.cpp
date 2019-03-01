//
// Created by ShengyunYu on 2019/2/26.
//

#include "common.h"

class Solution {
public:
    int addDigits(int num) {
        string s = to_string(num);
        int sum = 0;
        while (s.length() != 1){
            sum = 0;
            for (int i = 0; i < s.size(); ++i) {
                sum = sum + s[i] - '0';
            }
            s = to_string(sum);
        }
        return stoi(s);
    }

};


int main(){
    Solution s;
    cout << s.addDigits(38) << endl;
}