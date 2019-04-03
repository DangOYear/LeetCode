//
// Created by ShengyunYu on 2019/2/4.
//

#include "common.h"

//#include <cctype>

class Solution {
public:

    bool isPalindrome(string s) {
        if (0 == s.length())
            return true;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int p = findForward(0, s);
        int q = findBackward(s.size() - 1, s);
        bool flag = true;
        while (p < q){
            if (s[p] != s[q]) {
                flag = false;
                break;
            }
            p = findForward(p + 1, s);
            q = findBackward(q - 1, s);
        }
        return flag;
    }
    int findForward(int p, string s){
        for (int i = p; i < s.size(); ++i) {
            if (isAlpha(s[i]))
                return i;
        }
        return s.size() - 1;
    }
    int findBackward(int q, string s){
        for (int i = q; i >= 0; --i) {
            if (isAlpha(s[i]))
                return i;
        }
        return 0;
    }
    
    bool isAlpha(char c){
        if (c <= 'z' && c >= 'a')
            return true;
        if (c <= '9' && c >= '0')
            return true;
        return false;
    }
};



int main(){
    Solution s;
    string S = "race a car";
    cout << s.isPalindrome(S) << endl;
}
