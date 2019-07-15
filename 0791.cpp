//
// Created by ShengyunYu on 2019/7/14.
//

#include "common.h"

class Solution {
public:
    string customSortString(string S, string T) {
        string res = "";
        map<char, int> count;
        for (int i = 0; i < T.length(); ++i) {
            ++count[T[i]];
        }

        for (int j = 0; j < S.length(); ++j) {
            while (count[S[j]] != 0) {
                res += S[j];
                count[S[j]] -= 1;
            }
        }

        for (auto it = count.begin();  it != count.end(); ++it) {
            if (it->second != 0) {
                int num = it->second;
                while (num--) {
                    res += it->first;
                }
            }
        }

        return res;

    }
};

int main() {
    string S = "rymfsxbpkgenziavjlqtuwo";
    string T = "hlhcnlgyziiykznxcphzfkxgfnomdstpdxbarsbuqlpxehzbuxtcvrtiuixeiobfbtkzzrvkvjhpdbvjvsxumvkjecfoowhxmdpp";
    Solution s;
    cout << s.customSortString(S, T);
}