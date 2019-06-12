//
// Created by ShengyunYu on 2019/5/4.
//
#include "common.h"


class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> res;
        int left = 0;
        int right = 0;
        for (int i = 0; i < S.length(); ++i) {
            while (i < S.length() && S[i] == S[left]) {
                i++;
            }
            if (i - left >= 3) {
                vector<int> range{left, i - 1};
                res.push_back(range);
            }
            left = i;
        }

        return res;
    }
};

void Print(vector<vector<int>> res){
    cout << "[";
    for (int i = 0; i < res.size(); ++i) {
        cout << "[";
        cout << res[i][0] << ",";
        cout << res[i][1] << "]";
    }
    cout << "]" << endl;
}

int main(){
    string S = "abbxxxxzzy";
    Solution s;
    Print(s.largeGroupPositions(S));
    S = "abc";
    Print(s.largeGroupPositions(S));
    S = "abcdddeeeeaabbbcd";
    Print(s.largeGroupPositions(S));
}