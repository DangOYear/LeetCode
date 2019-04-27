//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"


class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<char> key1 = {'q','w','e','r','t','y','u','i','o','p','Q','W','E','R','T','Y','U','I','O','P'};
        vector<char> key2 = {'a','s','d','f','g','h','j','k','l','A','S','D','F','G','H','J','K','L'};
        vector<char> key3 = {'z','x','c','v','b','n','m','Z','X','C','V','B','N','M'};
        vector<string> res;

        for (int j = 0; j < key1.size(); ++j) {
            keyboard[key1[j]] = 1;
        }

        for (int j = 0; j < key2.size(); ++j) {
            keyboard[key2[j]] = 2;
        }

        for (int j = 0; j < key3.size(); ++j) {
            keyboard[key3[j]] = 3;
        }


        for (int i = 0; i < words.size(); ++i) {
            int mark1 = 0;
            int mark2 = 0;
            int mark3 = 0;
            for (int j = 0; j < words[i].length(); ++j) {
                if (keyboard[words[i][j]] == 1){
                    mark1 = 1;
                } else{
                    if (keyboard[words[i][j]] == 2){
                        mark2 = 1;
                    } else{
                        mark3 = 1;
                    }
                }
            }
            if (mark1 + mark2 + mark3 == 1)
                res.push_back(words[i]);
        }
        return res;
    }

private:
    map<char, int> keyboard;
};


void Print(vector<string> v){
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
}

int main(){
    Solution s;
    vector<string> words{"Aasdfghjkl","Qwertyuiop","zZxcvbnm"};
    Print(s.findWords(words));
}