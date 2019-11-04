//
// Created by ShengyunYu on 2019/11/4.
//

#include "common.h"


class Solution {
public:
    vector<int> transformArray(vector<int>& arr) {
        bool change = true;
        vector<int> temp = arr;
        while (change){
            change = false;
            for (int i = 1; i < arr.size() - 1; ++i) {
                if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                    temp[i] -= 1;
                    change = true;
                } else{
                    if (arr[i] < arr[i-1] && arr[i] < arr[i + 1]) {
                        temp[i] += 1;
                        change = true;
                    }
                }
            }
            arr = temp;
        }
        return arr;
    }
};

int main() {
    Solution solution;

    vector<int> arr{1,6,3,4,3,5};

    PrintIntVector(solution.transformArray(arr));
}