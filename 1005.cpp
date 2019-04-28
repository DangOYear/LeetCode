//
// Created by ShengyunYu on 2019/4/28.
//

#include "common.h"


class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int res = 0;
        for (int i = 0; i < A.size(); ++i) {
            pq.push(A[i]);
        }
        for (int j = 0; j < K; ++j) {
            int num = pq.top();
            pq.pop();
            pq.push(-num);
        }
        int size = pq.size();
        for (int k = 0; k < size; ++k) {
            res += pq.top();
            //cout << pq.top() << endl;
            pq.pop();
        }
        return res;
    }
};

int main(){
    vector<int> A{3, -1, 0, 2};
    int K = 2;
    Solution s;
    cout << s.largestSumAfterKNegations(A, K);
}