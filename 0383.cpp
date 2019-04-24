//
// Created by ShengyunYu on 2019/4/24.
//

#include "common.h"


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[26] = {0};
        for (int i = 0; i < magazine.length(); ++i) {
            ++hash[magazine[i] - 'a'];
        }
        for (int j = 0; j < ransomNote.size(); ++j) {
            --hash[ransomNote[j] - 'a'];
        }
        for (int k = 0; k < 26; ++k) {
            if (hash[k] < 0)
                return false;
        }
        return true;
    }
};


int main(){

}