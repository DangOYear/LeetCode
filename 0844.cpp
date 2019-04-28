//
// Created by ShengyunYu on 2019/4/28.
//

#include "common.h"



class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> sStack;
        stack<char> tStack;
        int size;
        for (int i = 0; i < S.length(); ++i) {
            if (S[i] == '#' && sStack.size() >= 1)
                sStack.pop();
            if (S[i] != '#')
                sStack.push(S[i]);
        }
        for (int i = 0; i < T.length(); ++i) {
            if (T[i] == '#' && tStack.size() >= 1)
                tStack.pop();
            if (T[i] != '#')
                tStack.push(T[i]);
        }
        if (sStack.size() != tStack.size())
            return false;
        size = sStack.size();
        while (size--){
            if (sStack.top() != tStack.top())
                return false;
            sStack.pop();
            tStack.pop();
        }
        return true;
    }
};


int main(){
    Solution s;
    string S = "a##c";
    string T = "#a#c";
    cout << s.backspaceCompare(S, T);
}

