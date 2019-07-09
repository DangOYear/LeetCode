//
// Created by ShengyunYu on 2019/7/9.
//

#include "common.h"
//1.第一种解法
//
//class Solution {
//public:
//    int minAddToMakeValid(string S) {
//        //int res = 0;
//
//        stack<char> s;
//        for (int i = 0; i < S.length(); ++i) {
//            if (S[i] == ')') {
//                if (s.size() >= 1 && s.top() == '(') {
//                    s.pop();
//                    continue;
//                }
//            }
//            s.push(S[i]);
//        }
//        return s.size();
//    }
//};

//2.第二种解法

class Solution {
public:
    int minAddToMakeValid(string S) {
        int left = 0;
        int right = 0;
        for (int i = 0; i < S.length(); ++i) {
            if (S[i] == '(')
                left++;
            else {
                if (S[i] == ')' && left >= 1) {
                    left--;
                } else{
                    right++;
                }
            }
        }
        return left + right;
    }
};


int main() {
    Solution s;
    cout << s.minAddToMakeValid("()))((") << endl;
}