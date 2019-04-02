//
// Created by ShengyunYu on 2019/4/2.
//

#include "common.h"


class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};
        int index = -1;
        for (int i = 0; i < s.length(); ++i) {
            count[s[i] - 'a']++;
        }
        for (int j = 0; j < s.length(); ++j) {
            if (1 == count[s[j] - 'a']){
                index = j;
                break;
            }
        }
        return index;
    }
};


int main(){
    string s = "loveleetcode";
    Solution S;
    cout << S.firstUniqChar(s) << endl;
}