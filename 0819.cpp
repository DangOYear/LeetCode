//
// Created by ShengyunYu on 2019/5/4.
//

#include "common.h"

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string, int> count;
        int max = -1;
        string mostCommon;
        string word = "";
        set<string> ban;
        for (int j = 0; j < banned.size(); ++j) {
            ban.insert(banned[j]);
        }
        for (int i = 0; i < paragraph.size(); ++i) {
            word += tolower(paragraph[i]);
            if (i + 1 >= paragraph.size() || !isAlpha(paragraph[i + 1])){
                if(++count[word] > max && ban.count(word) == 0){
                    max = count[word];
                    mostCommon = word;

                }
                word.clear();
                while (i + 1 < paragraph.size() && !isAlpha(paragraph[i + 1])){
                    i++;
                }
            }
        }
        return mostCommon;
    }

    bool isAlpha(char c){
        if (c <= 'Z' && c >= 'A')
            return true;

        if (c <= 'z' && c >= 'a')
            return true;
        return false;
    }
};

int main(){
    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> banned{"hit"};
    Solution s;
    cout << s.mostCommonWord(paragraph, banned);
}
