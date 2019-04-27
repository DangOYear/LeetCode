//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"


class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = x ^ y;
        int count = 0;
        while (ans){
            if (ans % 2 == 1)
                ++count;
            ans /= 2;
        }
        return count;
    }
};

int main(){
    Solution s;
    cout << s.hammingDistance(93, 73) << endl;
}


