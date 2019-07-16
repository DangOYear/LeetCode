//
// Created by ShengyunYu on 2019/7/16.
//

#include "common.h"

class Solution {
public:
    string longestWord(vector<string>& words) {
        int max = INT_MIN;
        set<string> wordSet;
        string res;
        for (int j = 0; j < words.size(); ++j) {
            wordSet.insert(words[j]);
        }
        sort(words.begin(), words.end(), [](string a, string b) {
            if (a.length() != b.length())
                return a.length() > b.length();
            return a < b;
        });
        //PrintStringVector(words);
        bool flag = true;
        for (int i = 0; i < words.size(); ++i) {
            flag = true;
            int Size = words[i].length();
            for (int j = Size; j >= 1; --j) {
                //cout << words[i].substr(0, j) << endl;
                if (wordSet.count(words[i].substr(0, j)) != 1) {

                    flag = false;
                }
            }
            if (flag) {
                res = words[i];
                break;
            }
        }
        return res;
    }
};

int main() {
    vector<string> words{"a", "banana", "app", "appl", "ap", "apply", "apple"};
    Solution s;
    cout << s.longestWord(words);
}