//
// Created by ShengyunYu on 2019/2/23.
//

#include <iostream>
#include <string>


using namespace std;



class Solution {
public:
    int titleToNumber(string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); ++i) {
            sum *= 26;
            sum += s[i] - 'A' + 1;
        }
        return sum;
    }
};


int main(){
    Solution s;
    string m = "ZY";
    cout << s.titleToNumber(m) << endl;
}