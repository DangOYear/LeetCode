//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"

class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        map<string, int> words;
        vector<string> res;
        string word = "";
        for (int i = 0; i <= A.length(); ++i) {
            if (i == A.length() || A[i] == ' '){
                ++words[word];
                word.clear();
                continue;
            }
            word += A[i];
        }
        for (int i = 0; i <= B.length(); ++i) {
            if (i == B.length() || B[i] == ' '){
                ++words[word];
                word.clear();
                continue;
            }
            word += B[i];
        }
        for (auto it= words.begin();  it != words.end() ; ++it) {
            if (it->second == 1){
                res.push_back(it->first);
            }
        }
        return res;
    }
};


void Print(vector<string> v){
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
}

int main(){
    string A = "this apple is sweet";
    string B = "this apple is sour";
    Solution s;
    Print(s.uncommonFromSentences(A, B));
}