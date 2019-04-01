//
// Created by ShengyunYu on 2019/4/1.
//

#include "common.h"


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        rever(nums, 0, n - 1);
        rever(nums, 0, k - 1);
        rever(nums, k, n - 1);
    }

    void rever(vector<int>& nums, int p, int q){
        while (p <= q){
            int temp = nums[p];
            nums[p] = nums[q];
            nums[q] = temp;
            p++;
            q--;
        }
    }

};


void Print(vector<int> v){
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int> v{1,2,3,4,5,6,7};
    int k = 3;
    Solution s;
    s.rotate(v, k);
    Print(v);
}