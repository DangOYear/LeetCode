//
// Created by ShengyunYu on 2019/7/31.
//

#include "common.h"


class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> res;
        map<char, int> last;
        for (int i = 0; i < S.length(); ++i) {
            last[S[i]] = i;
        }

        int Max = 0;
        int start = 0;
        for (int j = 0; j < S.length(); ++j) {
            Max = max(Max, last[S[j]]);
            if (j == Max) {
                res.push_back(j - start + 1);
                start = j + 1;
            }
        }
        return res;
    }
};


int main() {
    string S = "ababcbacadefegdehijhklij";
    Solution solution;
    PrintIntVector(solution.partitionLabels(S));
}