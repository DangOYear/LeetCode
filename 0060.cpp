//
// Created by ShengyunYu on 2019/9/19.
//

#include "common.h"

class Solution {
public:
    string getPermutation(int n, int k) {
        Permutation(n);
        return res[k-1];
    }

    void Permutation()

private:
    vector<string> res;
};


//Example 1:
//
//Input: n = 3, k = 3
//Output: "213"
//Example 2:
//
//Input: n = 4, k = 9
//Output: "2314"

int main() {
    Solution solution;
    cout << solution.getPermutation(3, 3) << endl;
    cout << solution.getPermutation(4, 9) << endl;
}