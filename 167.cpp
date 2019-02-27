//
// Created by ShengyunYu on 2019/2/27.
//

#include "common.h"


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int low = 0;
        int high = numbers.size() - 1;
        vector<int> res(2);
        while (low < high) {
            if (numbers[low] + numbers[high] == target) {
                res[0] = low + 1;
                res[1] = high + 1;
                break;
            } else if (numbers[low] + numbers[high] < target) {
                    ++low;
                } else {
                    --high;
                }

        }
        return res;
    }
};


void Print(vector<int> v){
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
}

int main(){
    vector<int> numbers{2,7,11,15};
    int target = 9;
    Solution s;
    Print(s.twoSum(numbers, target));
}