//
// Created by ShengyunYu on 2019/2/24.
//

#include "common.h"


class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        set<int> trust_first;
        map<int,int> trust_second;
        int town_judge = -1;
        for (int i = 0; i < trust.size(); ++i) {
            trust_second[trust[i][1]]++;
            trust_first.insert(trust[i][0]);
        }
        for (int j = 1; j <= N; ++j) {
            if (trust_second[j] == N - 1 && !trust_first.count(j) ){
                town_judge = j;
            }
        }
        return town_judge;
    }
};


int main(){
    Solution s;
    vector<vector<int>> trust{{1,3},{1,4},{2,3},{2,4},{4,3}};

    cout << s.findJudge(4,trust) << endl;
}
