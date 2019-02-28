//
// Created by ShengyunYu on 2019/2/28.
//

#include "common.h"


class Solution {
public:
    bool isHappy(int n) {
        //参考判断链表是否有环
        int slow = n;
        int fast = n;
        do{
            slow = process(slow);
            fast = process(fast);
            fast = process(fast);
        }while (slow != fast);

        if (slow) return true;
        return false;

    }

    int process(int num){
        int digit;
        int sum = 0;
        while (num){
            digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }
};


int main(){
    Solution s;
    cout << s.isHappy(19) << endl;
}