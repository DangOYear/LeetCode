//
// Created by ShengyunYu on 2019/6/30.
//

#include "common.h"


class Solution {
public:
    string frequencySort(string s) {
        map<char, int> sMap;
        map<int, vector<char>> bucket;
        string res = "";
        for (unsigned i = 0; i < s.size(); ++i) {
            sMap[s[i]]++;
        }

        for (auto it = sMap.begin(); it != sMap.end(); ++it) {
            bucket[it->second].push_back(it->first);
        }

        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            for (int i = 0; i < bucket[it->first].size(); ++i) {
                string temp(it->first, bucket[it->first][i]);
                res = temp + res;
            }
        }
        return res;
    }
};


int main() {
    Solution s;
    cout << s.frequencySort("2a554442f544asfasssffffasss");
}