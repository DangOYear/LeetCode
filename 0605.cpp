//
// Created by ShengyunYu on 2019/6/12.
//

#include "common.h"

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); ++i) {
            if ((i == 0 || flowerbed[i - 1] == 0) && flowerbed[i] == 0 && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1;
                n--;
            }
        }
        return n <= 0;
    }
};

int main() {
    Solution s;
    vector<int> v{1,0,0,0,1};
    int n = 1;
    PrintBool(s.canPlaceFlowers(v, n));

    vector<int> w{1,0,0,0,1};
    n = 2;
    PrintBool(s.canPlaceFlowers(w, n));
}