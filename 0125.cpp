//
// Created by ShengyunYu on 2019/2/4.
//

#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    bool isAlphaOrNum(char c){
        if ((c <= 'Z' && c>= 'A') || (c <= 'z' && c>= 'a') || (c <= '9' && c >= '0'))
            return true;
        return false;
    }
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right){
            if (!isAlphaOrNum(s[left])) ++left;
            else{
                if (!isAlphaOrNum(s[right])) --right;
                else{

                }
            }
        }
    }
};

