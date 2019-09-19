//
// Created by ShengyunYu on 2019/9/19.
//

#include "common.h"

class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](vector<int> a, vector<int> b) {
            return a[1] < b[1];
        });
        int slide = INT_MIN;
        int res = 0;

        for (int i = 0; i < pairs.size(); ++i) {
            if (slide < pairs[i][0]) {
                slide = pairs[i][1];
                ++res;
            }
        }
        return res;
    }
};


//Input: [[1,2], [2,3], [3,4]]
//Output: 2
//Explanation: The longest chain is [1,2] -> [3,4]


int main() {
    Solution solution;
    vector<vector<int>> pairs{{1,2}, {2,3}, {3,4}};
    PrintInt(solution.findLongestChain(pairs));
}