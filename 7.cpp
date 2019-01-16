//
// Created by 虞圣赟 on 2019/1/15.
//

#include "common.h"

class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while(x!=0){
            if(abs(res)>INT32_MAX/10) return 0;
            res = res*10 + x%10;
            x /= 10;
        }
        return res;
    }
};


int main(){
    Solution s;
    cout<<s.reverse(123)<<endl;
    cout<<s.reverse(-123)<<endl;
    cout<<s.reverse(120)<<endl;

}