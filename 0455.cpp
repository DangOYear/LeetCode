//
// Created by ShengyunYu on 2019/6/8.
//

#include "common.h"


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        int count = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        for (int i = 0, j = 0; i < g.size() && j < s.size(); ++i, ++j) {
            while (j < s.size() && g[i] > s[j]) {
                j++;
            }
            if (j != s.size())
                ++count;
        }
        return count;
    }
};


int main() {
    Solution s;

    vector<int> g1{1,2,3};
    vector<int> s1{1,1};


    cout << s.findContentChildren(g1, s1) << endl;

    vector<int> g2{10,9,8,7};
    vector<int> s2{5,6,7,8};
    cout << s.findContentChildren(g2, s2) << endl;
}