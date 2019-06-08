//
// Created by ShengyunYu on 2019/6/8.
//

#include "common.h"


class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for (int i = 0; i < bills.size(); ++i) {
            switch (bills[i]){
                case 5:
                    five++;
                    break;
                case 10:
                    if (five >= 1) {
                        five--;
                        ten++;
                    } else {
                        return false;
                    }
                    break;
                case 20:
                    if (five >= 1 && ten >= 1) {
                        five--;
                        ten--;
                    } else{
                        if (five >= 3) {
                            five -= 3;
                        } else {
                            return false;
                        }
                    }
                    break;
            }
        }
        return true;
    }
};


int main() {
    vector<int> bills{5,5,5,10,20};

}