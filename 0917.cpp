//
// Created by ShengyunYu on 2019/4/2.
//

#include "common.h"


class Solution {
public:
    string reverseOnlyLetters(string S) {
        int p = findForward(S, 0);
        int q = findBackward(S, S.length() - 1);
        while (p <= q){
            char c = S[p];
            S[p] = S[q];
            S[q] = c;
            p = findForward(S, p + 1);
            q = findBackward(S, q - 1);

        }
        return S;
    }

    int findForward(string s, int pos){
        while (pos < s.length()){
            if (isAlpha(s[pos]))
                break;
            pos++;
        }
        return pos;
    }

    int findBackward(string s, int pos){
        while (pos >= 0){
            if (isAlpha(s[pos]))
                break;
            pos--;
        }
        return pos;
    }

    bool isAlpha(char c){
        if (c <= 'z' && c >= 'a')
            return true;
        if (c <= 'Z' && c >= 'A')
            return true;
        return false;
    }
};


int main(){
    string S = "a-bC-dEf-ghIj";
    Solution s;
    cout << s.reverseOnlyLetters(S) << endl;
}