//
// Created by ShengyunYu on 2019/9/5.
//
#include "common.h"


class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> que = trans(queries);
        vector<int> word = trans(words);
        vector<int> res;

        for (int i = 0; i < que.size(); ++i) {
            int ans = 0;
            for (int j = 0; j < word.size(); ++j) {
                if (que[i] < word[j])
                    ++ans;
            }
            res.push_back(ans);
        }
        return res;
    }


    vector<int> trans(vector<string> queries) {
        vector<int> res;
        for (int i = 0; i < queries.size(); ++i) {
            map<char , int> m;
            for (int j = 0; j < queries[i].length(); ++j) {
                m[queries[i][j]]++;
            }
            res.push_back(m.begin()->second);
        }
        return res;
    }
};


int main() {
    vector<string> queries{"bbb","cc"};
    vector<string> words{"a","aa","aaa","aaaa"};
    Solution solution;
    PrintIntVector(solution.numSmallerByFrequency(queries, words));
}