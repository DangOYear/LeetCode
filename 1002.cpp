//
// Created by ShengyunYu on 2019/3/6.
//

#include "common.h"

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int n = A.size();
        int value[n][26];
        for (int m = 0; m < n; ++m) {
            memset(value[m],0,26* sizeof(int));
        }
        int Min[26];
        for (int i1 = 0; i1 < 26; ++i1) {
            Min[i1] = 300;
        }
        vector<string> res;
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < A[i].length(); ++j) {
                //cout << A[i][j] <<" ";
                value[i][A[i][j] - 'a']++;
            }
        }
        cout << endl;
        for (int k = 0; k < 26; ++k) {
            //cout << Min[k] << " ";
            for (int i = 0; i < n; ++i) {
                Min[k] = min(Min[k], value[i][k]);

            }
            //cout << Min[k] << " ";
        }
        //cout << "m" << endl;
        for (int l = 0; l < 26; ++l) {
            //cout << Min[l] << endl;
            while (Min[l]--){
                string s= "";
                s = s + char(l + 'a');
                res.push_back(s);
                //cout << s << endl;
            }
        }
        return res;
    }
};




int main(){
    string s1 = "bella";
    string s2 = "label";
    string s3 = "roller";
    vector<string> v;
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    Solution s;
    s.commonChars(v);
}