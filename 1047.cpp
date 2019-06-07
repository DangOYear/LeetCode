//
// Created by ShengyunYu on 2019/5/19.
//

#include "common.h"

class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> s;
        string res = "";
        for (int i = 0; i < S.length(); ++i) {
            if (!s.empty() && s.top() == S[i]) {
                s.pop();
            } else {
                s.push(S[i]);
            }
        }
        while (!s.empty()) {
            res += s.top();
            s.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};


int main(){
    Solution s;
    string S = "abbaca";
    cout << s.removeDuplicates(S) << endl;
}