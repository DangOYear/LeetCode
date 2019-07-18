//
// Created by ShengyunYu on 2019/7/18.
//

#include "common.h"

class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        int level = log(label) / log(2) + 1;
        vector<int> path(level);
        while (label) {
            path[level-1] = label;
            label = pow(2, level) - 1 - label + pow(2, level - 1);
            label >>= 1;
            level--;
        }
        return path;
    }
};

int main() {

}