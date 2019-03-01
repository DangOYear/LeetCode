//
// Created by ShengyunYu on 2019/2/26.
//

#include "common.h"

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int firstbad = n;
        while (isBadVersion(firstbad)){
            --firstbad;
        }
        return ++firstbad;
    }
};

int main(){
    Solution s;

}
