//
// Created by ShengyunYu on 2019/7/8.
//

#include "common.h"


class Solution {
public:
    string defangIPaddr(string address) {
        string res = "";

        for (int i = 0; i < address.length(); ++i) {
            if (address[i] == '.') {
                res += "[.]";
            } else{
                res += address[i];
            }
        }
        return res;
    }
};


int main() {
    Solution s;
    string address = "1.1.1.1";
    PrintBool(s.defangIPaddr(address) == "1[.]1[.]1[.]1");

    address = "255.100.50.0";
    PrintBool(s.defangIPaddr(address) == "255[.]100[.]50[.]0");
}