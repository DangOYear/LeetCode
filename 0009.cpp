//
// Created by 虞圣赟 on 2019/1/15.
//

#include "common.h"


class Solution {
public:
    bool isPalindrome(int x) {
        int reverse_num = 0;
        if(x < 0 || (x%10 == 0 && x/10 != 0))
            return false;
        while(x > reverse_num){
            reverse_num = reverse_num * 10 + x % 10;
            x = x / 10;
        }
        if(x == reverse_num || x == reverse_num/10)
            return true;
        return false;
    }
};


int main(){
    Solution s;
    cout<<s.isPalindrome(121)<<endl;
    cout<<s.isPalindrome(-121)<<endl;
    cout<<s.isPalindrome(10)<<endl;
}