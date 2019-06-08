//
// Created by ShengyunYu on 2019/4/26.
//

#include "common.h"


class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if (typed.length() < name.length())
            return false;
        int i = 0, j = 0;
        while (i < name.length()) {
            if (j >= typed.length())
                return false;
            if (name[i] == typed[j]) {
                i++;
                j++;
            } else {
                if (i != 0 && typed[j] == name[i - 1])
                    j++;
                else
                    return false;
            }
        }
        return true;
    }
};


int main() {
    Solution s;
    string name = "alex", typed = "aaleex";
    PrintBool(s.isLongPressedName(name, typed));


    name = "saeed", typed = "ssaaedd";
    PrintBool(s.isLongPressedName(name, typed));


    name = "leelee", typed = "lleeelee";
    PrintBool(s.isLongPressedName(name, typed));


    name = "laiden", typed = "laiden";
    PrintBool(s.isLongPressedName(name, typed));
}

