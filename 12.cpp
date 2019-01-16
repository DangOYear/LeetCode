//
// Created by 虞圣赟 on 2019/1/15.
//

#include "common.h"

class Solution {
public:
    string intToRoman(int num) {
        string str="";
        vector<int> value{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> romanstr{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i=0; i<value.size(); i++){
            while(num >= value[i]){
                num -= value[i];
                str += romanstr[i];
            }
        }
        return str;
    }
};


int main(){
    Solution s;
    cout<<s.intToRoman(3)<<endl;
    cout<<s.intToRoman(4)<<endl;
    cout<<s.intToRoman(9)<<endl;
    cout<<s.intToRoman(58)<<endl;
    cout<<s.intToRoman(1994)<<endl;
}

