//
// Created by ShengyunYu on 2019/8/15.
//

#include "common.h"


class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        for (int i = 0; i < words.size(); ++i) {
            if (match(words[i], pattern))
                res.push_back(words[i]);
        }
        return res;
    }

    bool match(string word, string pattern) {
        map<char, char> m1;
        map<char, char> m2;
        for (int i = 0; i < word.length(); ++i) {
            char w = word[i];
            char p = pattern[i];

            if (m1.count(w) == 0)   m1[w] = p;
            if (m2.count(p) == 0)   m2[p] = w;

            if (m1[w] != p || m2[p] != w) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    vector<string> words{"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb";
    PrintStringVector(solution.findAndReplacePattern(words, pattern));
}