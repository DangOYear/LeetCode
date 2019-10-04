//
// Created by ShengyunYu on 2019/9/19.
//

#include "common.h"


class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        sort(logs.begin(), logs.end(), [](string a, string b) {
            string s1 = a.substr(a.find(' ') + 1);
            string s2 = b.substr(b.find(' ') + 1);
            bool isDigit1 = isdigit(s1[0]);
            bool isDigit2 = isdigit(s2[0]);

            if (!isDigit1 && !isDigit2) {
                if (s1 != s2)
                    return s1 < s2;
                else
                    return a < b;
            }

            if (isDigit1 && isDigit2) {
                return false;
            }

            if (!isDigit1 && isDigit2) {
                return true;
            }

            return false;
        });
        return logs;
    }

    bool isDigit(char c) {
        return (c <= '9') && (c >= '0');
    }
};


int main() {
    vector<string> logs{"dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero"};

    Solution solution;

    PrintStringVector(solution.reorderLogFiles(logs));
}