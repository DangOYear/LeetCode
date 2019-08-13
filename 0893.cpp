//
// Created by ShengyunYu on 2019/8/11.
//

#include "common.h"

class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        set<string> res;


        for (int i = 0; i < A.size(); ++i) {
            int count[26 * 2];
            memset(count, 0, sizeof(count));
            for (int j = 0; j < A[i].length(); ++j) {
                count[A[i][j] - 'a' + 26 * (j % 2)]++;
            }
            string temp = "";
            for (int k = 0; k < 26 * 2; ++k) {
                temp += count[k];
            }
            //cout << "temp:" << temp << endl;
            res.insert(temp);
        }

        return res.size();
    }
};



int main() {
    vector<string> A{"abcd","cdab","adcb","cbad"};
    Solution solution;
    cout << solution.numSpecialEquivGroups(A) << endl;
}