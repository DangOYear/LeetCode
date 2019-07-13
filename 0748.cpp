//
// Created by ShengyunYu on 2019/7/13.
//

#include "common.h"

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        //sort(words.begin(), words.end());
        vector<string> resVec;
        string res;
        int min = INT_MAX;
        map<int, int> licensePlateMap;
        for (int i = 0; i < licensePlate.size(); ++i) {
            if (isalpha(licensePlate[i])) {
                licensePlateMap[tolower(licensePlate[i])]++;
            }
        }
        int ans = 0;
        for (ans = 0; ans < words.size(); ++ans) {
            map<int, int> wordMap;
            for (int i = 0; i < words[ans].length(); ++i) {
                if (isalpha(words[ans][i])) {
                    wordMap[tolower(words[ans][i])]++;
                }
            }
            bool flag = true;
            for (auto it = licensePlateMap.begin(); it != licensePlateMap.end() ; it++) {
                if (licensePlateMap[it->first] > wordMap[it->first])
                    flag = false;
            }
            if (flag) {
                resVec.push_back(words[ans]);
            }
        }

        for (int j = 0; j < resVec.size(); ++j) {
            if (resVec[j].length() < min) {
                res = resVec[j];
                min = resVec[j].length();
            }
        }
        return res;
    }
};


int main(int argc, char **argv) {

    Solution s;
    vector<string> words{"looks","pest","stew","show"};
    string licensePlate = "1s3 456";
    cout << s.shortestCompletingWord(licensePlate, words);
}