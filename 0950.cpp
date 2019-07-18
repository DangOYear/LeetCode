//
// Created by ShengyunYu on 2019/7/13.
//

#include "common.h"

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int> res(deck.size(), 0);
        sort(deck.begin(), deck.end(), [](int a, int b){
            return a > b;
        });

        queue<int> q;
        for (int i = 0; i < deck.size(); ++i) {
            q.push(deck[i]);
            int p = q.front();
            if (q.size() == deck.size())
                break;
            q.pop();
            q.push(p);
        }
        for (int j = deck.size() - 1; j >= 0; --j) {
            res[j] = q.front();
            q.pop();
        }
        //PrintIntVector(res);



        return res;
    }
};



int main() {
    vector<int> deck{17,13,11,2,3,5,7};
    Solution s;
    PrintIntVector(s.deckRevealedIncreasing(deck));

}