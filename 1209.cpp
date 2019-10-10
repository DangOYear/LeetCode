//
// Created by ShengyunYu on 2019/10/4.
//

#include "common.h"


class Solution {
public:
    string removeDuplicates(string s, int k) {
        int stack[10010];
        int pos
    }
};

//Example 1:
//
//Input: s = "abcd", k = 2
//Output: "abcd"
//Explanation: There's nothing to delete.
//Example 2:
//
//Input: s = "deeedbbcccbdaa", k = 3
//Output: "aa"
//Explanation:
//        First delete "eee" and "ccc", get "ddbbbdaa"
//Then delete "bbb", get "dddaa"
//Finally delete "ddd", get "aa"
//Example 3:
//
//Input: s = "pbbcggttciiippooaais", k = 2
//Output: "ps"

int main() {
    Solution solution;
    string s = "abcd";
    int k = 2;

    cout << solution.removeDuplicates(s, k) << endl;

    s = "deeedbbcccbdaa";
    k = 3;
    cout << solution.removeDuplicates(s, k) << endl;

    s = "pbbcggttciiippooaais";
    k = 2;
    cout << solution.removeDuplicates(s, k) << endl;
}