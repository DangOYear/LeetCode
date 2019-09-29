//
// Created by ShengyunYu on 2019/9/29.
//

#include "common.h"


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> countArr;
        set<int> fre;
        bool flag = true;
        for (int num:arr) {
            countArr[num]++;
        }

        for (auto p = countArr.begin(); p != countArr.end(); ++p) {
            if (fre.count(p->second) > 0) {
                flag = false;
                break;
            }
            fre.insert(p->second);
        }
        return flag;
    }
};


int main() {
    vector<int> arr{-3,0,1,-3,1,1,1,-3,10,0};
    Solution solution;
    PrintBool(solution.uniqueOccurrences(arr));
}