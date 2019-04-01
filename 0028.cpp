//
// Created by ShengyunYu on 2019/3/29.
//

#include "common.h"

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.length() < needle.length())
            return -1;
        int i, j;
        i = 0;
        while (1) {
            j = 0;
            while (1){
                if (j == needle.length()) return i;
                if (i > haystack.length() - needle.length() ) return -1;
                if (haystack[i + j] != needle[j]) break;
                j++;
            }
            i++;
        }
    }
};




int main(){
    string haystack = "aaa", needle = "mississippi";
    Solution s;
    cout << s.strStr(haystack, needle) << endl;
}