//
// Created by ShengyunYu on 2019/4/27.
//
#include "common.h"

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> kind;
        for (int i = 0; i < candies.size(); ++i) {
            kind.insert(candies[i]);
        }
        int n = kind.size();
        if (n >= candies.size() / 2)
            return candies.size() / 2;
        else {
            return n;
        }
    }
};

int main(){
    vector<int> v{1,1,2,3};
    Solution s;
    cout << s.distributeCandies(v) << endl;
}