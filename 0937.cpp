//
// Created by ShengyunYu on 2019/9/19.
//

#include "common.h"


class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        sort(logs.begin(), logs.end(), [](string a, string b) {
           string
        });
    }
};


int main() {
    vector<string> logs{"dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero"};

    Solution solution;

    PrintStringVector(solution.reorderLogFiles(logs));
}