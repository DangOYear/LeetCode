//
// Created by ShengyunYu on 2019/4/2.
//

#include "common.h"

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for (int i = 0; i < word.length(); ++i) {
            if (isCapital(word[i]))
                count++;
        }
        return ((count == 0) || count == word.length() || (count == 1 && isCapital(word[0])));
    }

    bool isCapital(char c){
        if (c <= 'Z' && c >= 'A')
            return true;
        return false;
    }
};


int main(){
    string word = "FlaG";
    Solution s;
    cout << s.detectCapitalUse(word) << endl;
}