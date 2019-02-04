//
// Created by ShengyunYu on 2019/2/4.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //vector<int> v;
        vector<int> temp = digits;
        int carry = 0;
        reverse(temp.begin(),temp.end());
        if (temp[0] + 1 >= 10) {
            carry = 1;
            temp[0] = (temp[0] + carry) % 10;
        } else{
            temp[0] = temp[0] + 1;
            carry = 0;
        }
        for (int i = 1; i < temp.size(); ++i) {
            if (temp[i] + carry >= 10){
                temp[i] = (temp[i] + carry) % 10;
                carry = 1;
            } else {
                temp[i] = temp[i] + carry;
                carry = 0;
                break;
            }
        }
        if (carry)
            temp.push_back(1);
        reverse(temp.begin(),temp.end());
        return temp;
    }
};



void Print(vector<int> v){
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main(){
    Solution s;
    vector<int> num1{1,2,3};
    vector<int> num2{9,9,9};
    Print(s.plusOne(num1));
    Print(s.plusOne(num2));
}