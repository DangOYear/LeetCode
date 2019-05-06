//
// Created by ShengyunYu on 2019/5/4.
//

#include "common.h"


class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if (deck.size() == 1)
            return false;
        map<int, int> integer;
        int min = INT_MAX;
        //bool flag = true;
        for (int i = 0; i < deck.size(); ++i) {

            ++integer[deck[i]];
        }
        for (auto it = integer.begin();  it != integer.end() ; ++it) {
            if (it->second < min)
                min = it->second;
        }
        for (auto it = integer.begin();  it != integer.end() ; ++it) {
            if (gcd(it->second, min) == 1)
                return false;
        }
        return true;
    }

    int gcd(int m, int n){
        if (m % n == 0)
            return n;
        else
            return gcd(n, m % n);
    }
};



void Print(bool flag){
    if (flag)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}


int main(){
    vector<int> deck1{1,2,3,4,4,3,2,1};
    Solution s;
    Print(s.hasGroupsSizeX(deck1));
    vector<int> deck2{1,1,1,1,2,2,2,2,2,2};
    Print(s.hasGroupsSizeX(deck2));

}


