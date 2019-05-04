//
// Created by ShengyunYu on 2019/5/4.
//

#include "common.h"

class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        int count = 0;
        string res = "";

        for (int i = S.length() - 1; i >= 0; --i) {
            if (S[i] == '-')
                continue;
            ++count;
            res += toupper(S[i]);
            if (count == K && findPre(S, i) != -1) {
                res += "-";
                count = 0;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }

    int findPre(string s, int i){
        int j;
        for (j = i - 1; j >= 0; --j) {
            if (s[j] != '-')
                break;
        }
        return j;
    }
};


int main(){
    Solution s;
    string S = "--a-a-a-a--";
    int K = 2;
    cout << s.licenseKeyFormatting(S, K);
}