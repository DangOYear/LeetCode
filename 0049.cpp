//
// Created by ShengyunYu on 2019/9/15.
//

#include "common.h"

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string, vector<string>> m;
        for (int i = 0; i < strs.size(); ++i) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            m[temp].push_back(strs[i]);
        }
        for (auto v_str:m) {
            res.push_back(v_str.second);
        }
        return res;
    }
};


int main() {


}