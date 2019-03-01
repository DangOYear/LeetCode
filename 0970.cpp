//
// Created by ShengyunYu on 2019/3/1.
//

#include "common.h"



class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int> s;
        vector<int> res;
        int m = 0,n = 0;
        if (x == 1) m = 1;
        if (y == 1) n = 1;
        while (x != 1 && pow(x, m++) <= bound);
        while (y != 1 && pow(y, n++) <= bound);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int num = pow(x, i) + pow(y, j);
                if (num <= bound){
                    s.insert(num);
                }
            }
        }
        for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
            res.push_back(*it);
        }
        return res;
    }
};


void print(vector<int> v){
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
}

int main(){
    Solution s;
    print(s.powerfulIntegers(1, 2, 100));
}