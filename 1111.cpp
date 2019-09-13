//
// Created by ShengyunYu on 2019/9/13.
//

#include "common.h"


class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> res;
        int A = 0;
        int B = 0;
        for (char c:seq) {
            if (c == '(') {
                res.push_back(A);
                A = 1 - A;
            } else {
                res.push_back(B);
                B = 1 - B;
            }
        }
        return res;
    }
};


int main() {
    Solution solution;
    string seq = "(()())";
    PrintIntVector(solution.maxDepthAfterSplit(seq));
}
//Example 1:
//
//Input: seq = "(()())"
//Output: [0,1,1,1,1,0]
//Example 2:
//
//Input: seq = "()(())()"
//Output: [0,0,0,1,1,0,1,1]
//