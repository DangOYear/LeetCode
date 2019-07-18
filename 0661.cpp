//
// Created by ShengyunYu on 2019/7/17.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {

        vector<vector<int>> res(M.size(), vector<int>(M[0].size(), 0));
        //PrintIntVectorVector(res);
        int dirR[] = {-1, 0, 1, 1, 1, 0, -1, -1};
        int dirC[] = {-1, -1, -1, 0, 1, 1, 1, 0};
        for (int i = 0; i < M.size(); ++i) {
            for (int j = 0; j < M[0].size(); ++j) {
                int count = 1;
                int sum = M[i][j];
                for (int k = 0; k < 8; ++k) {
                    int nextR = i + dirR[k];
                    int nextC = j + dirC[k];

                    if (nextR >= 0 && nextR < M.size() && nextC >= 0 && nextC < M[0].size()) {
                        ++count;
                        sum += M[nextR][nextC];
                    }
                }
//                cout << "i:" << i << " ";
//                cout << "j:" << j << " ";
//                cout << "sum" << sum << " ";
//                cout << "count:" << count << " " << endl;endl
                res[i][j] = sum / count;
            }
        }
        return res;

    }
};


int main() {
    vector<vector<int>> M{{1,1,1},{1,0,1},{1,1,1}};

    Solution s;
    PrintIntVectorVector(s.imageSmoother(M));
}