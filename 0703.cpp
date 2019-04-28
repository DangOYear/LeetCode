//
// Created by ShengyunYu on 2019/4/28.
//


#include "common.h"
class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        _k = k;
        for (int i = 0; i < nums.size(); ++i) {
            pq.push(nums[i]);
            if (pq.size() > _k) pq.pop();
        }
    }

    int add(int val) {
        pq.push(val);
        if (pq.size() > _k)
            pq.pop();
        return pq.top();
    }

private:
    int _k;
    priority_queue<int, vector<int>, greater<int>> pq;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */



int main(){


}