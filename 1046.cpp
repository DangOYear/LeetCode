//
// Created by ShengyunYu on 2019/5/20.
//

#include "common.h"

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> res;
        for (int i = 0; i < stones.size(); ++i) {
            res.push(stones[i]);
        }
        while (res.size() > 1) {
            int diff = res.top();
            res.pop();
            diff = abs(diff - res.top());
            res.pop();
            if (diff != 0)
                res.push(diff);
        }
        if (res.size() == 1)
            return res.top();
        else
            return 0;
    }
};

int main(){
    Solution s;
    vector<int> stones{2,7,4,1,8,1};
    cout << s.lastStoneWeight(stones) << endl;
}