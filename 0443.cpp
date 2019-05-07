//
// Created by ShengyunYu on 2019/5/4.
//

#include "common.h"

class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 0;
        int charCount = 1;
        for (int i = 0; i < chars.size() - 1; ++i) {
            if (chars[i] == chars[i + 1]) {

            }
        }
    }
};


int main(){
    vector<char> chars{'a','a','b','b','c','c','c'};
    Solution s;
    cout << s.compress(chars) << endl;
}