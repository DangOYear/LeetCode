//
// Created by ShengyunYu on 2019/9/15.
//

#include "common.h"


class Solution {
public:
    bool queryString(string S, int N) {
        set<int> count;
        for (int i = 0; i < S.length(); ++i) {
            if(S[i] == '0') continue;
            int num = 0;
            for (int j = i; j < S.length(); ++j) {
                num = 2 * num + S[j] - '0';

                if (num <= N) {
                    count.insert(num);
                } else{
                    break;
                }
            }
        }
        return count.size() == N;
    }
};


int main() {
    string S = "0110";
    int N = 3;
    Solution solution;
    PrintBool(solution.queryString(S, N));
    S = "0110";
    N = 4;
    PrintBool(solution.queryString(S, N));
}