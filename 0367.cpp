//
// Created by ShengyunYu on 2019/4/5.
//

#include "common.h"


class Solution {
public:
    bool isPerfectSquare(int num) {
        for (int i = 1; i <= num / i; ++i) {
            if (i * i == num)
                return true;
        }
        return false;
    }
};


int main(int argc, char **argv){

}