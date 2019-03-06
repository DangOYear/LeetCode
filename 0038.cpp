//
// Created by ShengyunYu on 2019/2/4.
//

#include <iostream>
using namespace std;



class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        string temp = "";
        int count = 1;
        for (int i = 2; i <= n; ++i) {
            string temp = res;
            res = "";
            for (int j = 0; j < temp.size(); ++j) {
                if (j + 1 < temp.size() && temp[j] == temp[j+1]){
                    count += 1;
                } else{
                    res += to_string(count) + temp[j];
                    count = 1;
                }
            }
        }
        return res;
    }
};




int main(){
    Solution s;
    cout << s.countAndSay(4) << endl;

}