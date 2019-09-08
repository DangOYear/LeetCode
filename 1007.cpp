//
// Created by ShengyunYu on 2019/9/8.
//

#include "common.h"

class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        int res = INT_MAX;
        map<int,int> m;
        int maxNum = INT_MIN;
        int frequency = INT_MIN;
        int same = 0;
        int countA = 0;
        int countB = 0;
        for(int num:A) {
            m[num]++;
            if (m[num] > frequency) {
                maxNum = num;
                frequency = m[num];
            }
        }
        for(int num:B) {
            m[num]++;
            if (m[num] > frequency) {
                maxNum = num;
                frequency = m[num];
            }
        }

        if (frequency < A.size())
            return -1;
        else {
            for (int i = 0; i < A.size(); ++i) {
                if (A[i] == B[i] && A[i] == maxNum)
                    ++same;

                if (A[i] != maxNum)
                    ++countA;

                if (B[i] != maxNum)
                    ++countB;

            }
        }

        if (frequency - same < (int)A.size())
            return -1;
        res = min(countA, countB);
        return res;
    }

};


int main() {

    vector<int> A{1,2,1,1,1,2,2,2};
    vector<int> B{2,1,2,2,2,2,2,2};
    Solution solution;
    cout << solution.minDominoRotations(A, B);
}