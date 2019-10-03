//
// Created by ShengyunYu on 2019/10/3.
//

#include "common.h"



class Solution {
public:
    string getHint(string secret, string guess) {
        int countA = 0;
        int countB = 0;
        string res = "";
        map<char, int> mSecret;
        map<char, int> mGuess;
        for (int i = 0; i < secret.length(); ++i) {
            if (secret[i] == guess[i])
                ++countA;
            mSecret[secret[i]]++;
            mGuess[guess[i]]++;
        }

        for (auto p:mSecret) {
            countB += min(mSecret[p.first], mGuess[p.first]);
        }
        res += to_string(countA);
        res += "A";
        res += to_string(countB - countA);
        res += "B";
        return res;

    }
};




int main() {
    Solution solution;
    string secret = "1807", guess = "7810";
    PrintString(solution.getHint(secret, guess));
}