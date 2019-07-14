//
// Created by ShengyunYu on 2019/7/14.
//

#include "common.h"

class Solution {
public:
    bool isValidSerialization(string preorder) {
        int node = 0;
        int leave = 0;
        for (int i = 0; i < preorder.size(); ++i) {
            if (preorder[i] == ',')
                continue;
            if (preorder[i] == '#')
                ++leave;
            else {
                while (i + 1 < preorder.size() && preorder[i + 1] != ',')
                    ++i;
                ++node;
            }

            if (leave > node + 1)
                return false;

            if (leave == node + 1 && i != preorder.size() - 1)
                return false;
        }

        if (leave != node + 1)
            return false;
        else
            return true;
    }
};


