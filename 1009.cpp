//
// Created by ShengyunYu on 2019/4/24.
//

#include "common.h"


class Solution {
public:
    int bitwiseComplement(int N) {
        if (N == 0)
            return 1;
        int res = 0;
        int count = 0;
        while (N){
            if (N % 2 == 0)
                res += pow(2, count);
            N /= 2;
            ++count;
        }
        return res;
    }
};


int main(){
    Solution s;
    cout << s.bitwiseComplement(7) << endl;
}