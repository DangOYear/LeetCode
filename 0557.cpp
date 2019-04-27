//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"



class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        string word = "";
        for (int i = 0; i <= s.length(); ++i) {
            if (i == s.length() || s[i] == ' '){
                reverse(word.begin(), word.end());
                res = res + word;
                if (s[i] == ' ')
                    res = res + " ";
                word.clear();
                continue;
            }
            word += s[i];
        }
        return res;
    }
};


int main(){
    Solution s;
    string S = "Let's take LeetCode contest";
    cout << s.reverseWords(S);
}