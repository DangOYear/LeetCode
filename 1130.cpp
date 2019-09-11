//
// Created by ShengyunYu on 2019/8/21.
//

#include "common.h"



class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int leafValue = 0;
        int res = 0;
        priority_queue<int, vector<int>, greater<int> > pq;
        for(int x:arr) {
            pq.push(x);
        }

        while (pq.size() >= 0) {
            temp *= pq.top();
            pq.pop();
            temp *= pq.top();
            pq.pop();
            pq.push(temp);
            res += temp;
            cout << temp << endl;
        }
        return res;
    }
};


int main() {
    vector<int> vec{6, 2, 4};
    Solution solution;
    cout << solution.mctFromLeafValues(vec) << endl;
}