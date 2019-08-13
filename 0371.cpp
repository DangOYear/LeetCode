//
// Created by ShengyunYu on 2019/6/12.
//

#include "common.h"

class Solution {
public:
    int getSum(int a, int b) {
        return b == 0 ? a:getSum(a^b, (unsigned int)(a & b) << 1);
    }
};

int main() {
    Solution solution;
    cout << solution.getSum(-1, 1);
}
