//
// Created by ShengyunYu on 2019/4/4.
//

#include "common.h"


class Solution {
public:
    string reverseVowels(string s) {
        int len = s.length();
        int p = findForward(0, s);
        int q = findBackward(len - 1, s);
        while (p < q){
            char temp = s[p];
            s[p] = s[q];
            s[q] = temp;
            p = findForward(p + 1, s);
            q = findBackward(q - 1, s);
        }
        return s;
    }


    int findForward(int p, string s){
        for (int i = p; i < s.length(); ++i) {
            if (isVowel(s[i])){
                return i;
            }
        }
        return s.length();
    }


    int findBackward(int q, string s){
        for (int i = q; i > 0; --i) {
            if (isVowel(s[i]))
                return i;
        }
        return -1;
    }
    bool isVowel(char c){
        bool flag = true;
        switch (c){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                flag = true;
                break;
            default:
                flag = false;
                break;
        }
        return flag;
    }
};


int main(int agrc, char **argv){
    string S = "hello";
    Solution s;
    cout << s.reverseVowels(S) << endl;
}