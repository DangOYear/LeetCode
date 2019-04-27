//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> wordsMorse;
        vector<string> morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for (int i = 0; i < words.size(); ++i) {
            string s = "";
            for (int j = 0; j < words[i].length(); ++j) {
                s += morse[(char)words[i][j] - 'a'];
            }
            wordsMorse.insert(s);
        }
        return wordsMorse.size();
    }
};

int main(){
    Solution s;
    vector<string> words{"gin", "zen", "gig", "msg"};
    cout << s.uniqueMorseRepresentations(words) << endl;
}
