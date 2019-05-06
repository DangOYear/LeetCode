//
// Created by ShengyunYu on 2019/5/5.
//

#include "common.h"


class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        while (i < bits.size() - 1) {
            i += bits[i] + 1;
        }
        return i == bits.size() - 1;
    }
};


int main(){

}