//
// Created by ShengyunYu on 2019/6/10.
//

#include "common.h"


class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            res = max(min(height[left], height[right]) * (right - left), res);
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return res;
    }
};



int main() {
    vector<int> v{1,8,6,2,5,4,8,3,7};
    Solution s;
    cout << s.maxArea(v) << endl;
}