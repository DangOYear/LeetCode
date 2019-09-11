//
// Created by ShengyunYu on 2019/9/11.
//

#include "common.h"


class Solution {
public:
    int maxProduct(vector<string>& words) {
        if (words.size() == 0)
            return 0;
        int res = 0;
        vector<int> hash(words.size(), 0);
        for (int i = 0; i < words.size(); ++i) {
            for (char c:words[i]) {
                hash[i] |= (1 << c - 'a');
            }
        }

        for (int j = 0; j < words.size() - 1; ++j) {
            for (int i = j + 1; i < words.size(); ++i) {
                if ((hash[i] & hash[j]) == 0) {
                    res = max(res, (int)words[i].length() * (int)words[j].length());
                }
            }
        }
        return res;
    }
};

int main() {
    Solution solution;
    vector<string> words{"abcw","baz","foo","bar","xtfn","abcdef"};
    cout << solution.maxProduct(words) << endl;
}