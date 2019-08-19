//
// Created by ShengyunYu on 2019/8/19.
//

#include "common.h"

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

        map<char, int> charsMap;
        map<char, int> temp;
        int reslength = 0;
        bool flag = true;
        for (char c:chars) {
            charsMap[c]++;
        }

        for (string s:words) {
            temp.clear();
            flag = true;
            for(char c:s){
                temp[c]++;
                if (temp[c] > charsMap[c])
                    flag = false;
            }
            if (flag)
                reslength += s.length();
        }
        return reslength;
    }
};

int main() {
    Solution solution;

}