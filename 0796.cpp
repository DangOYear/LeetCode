//
// Created by ShengyunYu on 2019/7/13.
//

#include "common.h"

class Solution {
public:
    bool rotateString(string A, string B) {
        if (A.length() != B.length())
            return false;
        A += A;
        if (A.find(B) != -1)
            return true;
        return false;
    }
};



int main() {
    Solution s;
    PrintBool(s.rotateString("abcde", "abced"));
}
