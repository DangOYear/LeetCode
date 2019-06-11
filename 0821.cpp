//
// Created by ShengyunYu on 2019/6/11.
//

#include "common.h"


class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> res(S.length(), INT_MAX);
        int left, right;
        for (int i = 0; i < S.length(); ++i) {
            if (S[i] == C) {
                res[i] = 0;
                left = i - 1;
                right = i + 1;
                while (left >= 0 && S[left] != C) {
                    res[left] = min(res[left], abs(i - left));
                    left--;
                }

                while (right < S.length() && S[right] != C) {
                    res[right] = min(res[right], abs(i - right));
                    right++;
                }
            }
        }
        return res;
    }
};


int main() {
    Solution s;
    string S = "loveleetcode";
    char C = 'e';
    PrintIntVector(s.shortestToChar(S, C));
}