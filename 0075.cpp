//
// Created by ShengyunYu on 2019/4/1.
//

#include "common.h"


class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count{0, 0, 0};
        for (int i = 0; i < nums.size(); ++i) {
            count[nums[i]]++;
        }
        int cursor = 0;
        for (int j = 0; j < count.size(); ++j) {

            while (count[j]--){
                nums[cursor++] = j;
            }
        }
    }
};


int main(){

}