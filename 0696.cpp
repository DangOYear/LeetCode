//
// Created by ShengyunYu on 2019/10/5.
//

#include "common.h"


class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> count;
        int res = 0;
        count.push_back(1);
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] != s[i-1]) {
                count.push_back(1);
            } else{
                count[count.size()-1]++;
            }
        }

        for (int j = 1; j < count.size(); ++j) {
            res += min(count[j], count[j-1]);
        }

        return res;
    }
};

//Example 1:
//Input: "00110011"
//Output: 6
//Explanation: There are 6 substrings that have equal number of consecutive 1's and 0's: "0011", "01", "1100", "10", "0011", and "01".
//
//Notice that some of these substrings repeat and are counted the number of times they occur.
//
//Also, "00110011" is not a valid substring because all the 0's (and 1's) are not grouped together.
//Example 2:
//Input: "10101"
//Output: 4
//Explanation: There are 4 substrings: "10", "01", "10", "01" that have equal number of consecutive 1's and 0's.

int main() {
    Solution solution;
    string s = "00110011";
    cout << solution.countBinarySubstrings(s) << endl;
}