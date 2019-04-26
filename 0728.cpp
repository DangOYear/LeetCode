//
// Created by ShengyunYu on 2019/4/26.
//

#import "common.h"

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; ++i) {
            if (isSelfDividingNumber(i))
                res.push_back(i);
        }
        return res;
    }

    bool isSelfDividingNumber(int num){
        vector<int> v;
        int n = num;
        while (n){
            if (n % 10 == 0)
                return false;
            v.push_back(n % 10);
            n /= 10;
        }
        for (int i = 0; i < v.size(); ++i) {
            if (num % v[i] != 0)
                return false;
        }
        return true;
    }
};

int main(){
    Solution s;

}

