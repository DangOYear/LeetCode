//
// Created by ShengyunYu on 2019/8/24.
//

#include "common.h"

class Solution {
public:
    int numDecodings(string s) {
        if (s.length() == 0) return 0;
        if (s[0] == '0') return 0;
        vector<int> dp(s.length() + 1, 1);
        for (int i = 2; i <= s.length(); i++) {
            if (s[i - 1] == '0') {
                if (s[i - 2] == '1' || s[i - 2] == '2')
                    dp[i] = dp[i - 2];
                else
                    dp[i] = 0;
                continue;
            }
            if (i - 2 >= 0 && s[i - 2] - '0' > 0) {
                if (s[i - 2] - '0' < 2 || (s[i - 2] - '0' == 2 && s[i - 1] - '0' < 7)) {
                    dp[i] = dp[i - 1] + dp[i - 2];
                    continue;
                }
            }
            dp[i] = dp[i - 1];
        }
        return dp[s.length()];
    }
};

int main() {
    Solution solution;
    string s = "12";
    cout << solution.numDecodings(s) << endl;
}