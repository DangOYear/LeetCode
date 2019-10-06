//
// Created by ShengyunYu on 2019/9/24.
//
#include "common.h"
class Solution {
public:
    int numPrimeArrangements(int n) {
        long res = 1;
        int prime = 0;
        int notPrime = 0;
        int mod = 1000000007;
        for (int i = 2; i <= n; ++i) {
            if (isPrime(i))
                prime++;
        }
        notPrime = n - prime;
        //cout << prime << endl;
        for (int j = 2; j <= prime; ++j) {
            res = (res * j) % mod;
        }

        for (int j = 2; j <= notPrime; ++j) {
            res = (res * j) % mod;
        }
        return (int)res;
    }

    bool isPrime(int num) {
        int s = sqrt(num);
        for (int i = 2; i <= s; ++i) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

};

//Example 1:
//
//Input: n = 5
//Output: 12
//Explanation: For example [1,2,5,4,3] is a valid permutation, but [5,2,3,4,1] is not because the prime number 5 is at index 1.
//Example 2:
//
//Input: n = 100
//Output: 682289015
int main() {
    Solution solution;
    int n = 5;
    cout << solution.numPrimeArrangements(n) << endl;

    n = 100;
    cout << solution.numPrimeArrangements(n) << endl;
}