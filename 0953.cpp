//
// Created by ShengyunYu on 2019/4/28.
//

#include "common.h"

map<char, int> compare;

bool cmp(string a, string b){
    int len = min(a.length(), b.length());
    for (int i = 0; i < len; ++i) {
        if (a[i] != b[i])
            return compare[a[i]] < compare[b[i]];
    }
    return a.length() < b.length();
}

class Solution {
public:
    //static map<char, int> compare;
    bool isAlienSorted(vector<string>& words, string order) {
        init(order);
        vector<string> sortedWord = words;
        sort(sortedWord.begin(), sortedWord.end(), cmp);
        return sortedWord == words;
    }

    void init(string order){
        for (int i = 0; i < order.length(); ++i) {
            compare[order[i]] = i;
        }
    }


};

int main(){
    Solution s;
    vector<string> words{"word","world","row"};
    string order = "worldabcefghijkmnpqstuvxyz";
    cout << s.isAlienSorted(words, order);
}

