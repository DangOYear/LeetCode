//
// Created by 虞圣赟 on 2019/1/16.
//

#include "common.h"


class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int str_len = s.length() - 1;
        while(str_len >= 0 && s[str_len] ==' '){
            str_len--;
        }
        while(str_len >=0 && s[str_len] != ' '){
            length++;
            str_len--;
        }
        return length;
    }
};


int main(){
    Solution s;
    cout << s.lengthOfLastWord("Hello World") << endl;
}