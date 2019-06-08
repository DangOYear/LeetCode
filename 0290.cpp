//
// Created by ShengyunYu on 2019/6/8.
//

#include "common.h"

//需改进

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        int count = 0;
        string word = "";
        map<char, string> value;
        set<string> words;
        set<char> c;
        for (int j = 0; j < pattern.length(); ++j) {
            c.insert(pattern[j]);
        }
        for (int i = 0; i <= str.length(); ++i) {
            if (i == str.length() || str[i] == ' ') {

                if (value.count(pattern[count])) {
                    if (value[pattern[count]] != word)
                        return false;

                } else {
                    value[pattern[count]] = word;
                    words.insert(word);
                }
                ++count;
                word.clear();
            } else {
                word += str[i];
            }
        }
        return words.size() == value.size() && words.size() == c.size();
    }
};

void Print(bool flag) {
    if (flag)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

int main(){
    Solution s;
    string pattern = "abba", str = "dog cat cat dog";
    Print(s.wordPattern(pattern, str));

    pattern = "abba", str = "dog cat cat fish";
    Print(s.wordPattern(pattern, str));

    pattern = "aaaa", str = "dog cat cat dog";
    Print(s.wordPattern(pattern, str));

    pattern = "jquery", str = "jquery";
    Print(s.wordPattern(pattern, str));

}