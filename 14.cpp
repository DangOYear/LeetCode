//
// Created by 虞圣赟 on 2019/1/15.
//

#include "common.h"

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        string prefix = strs[0];
        for(int i=1;i<strs.size();i++){
            while (strs[i].find(prefix)!=0){
                prefix = prefix.substr(0,prefix.length()-1);
                if(prefix.length()==0) return "";
            }
        }
        return prefix;
    }
};


int main(){
    Solution s;
    vector<string> s1{"flower","flow","flight"};
    vector<string> s2{"dog","racecar","car"};
    cout<<s.longestCommonPrefix(s1)<<endl;
    cout<<s.longestCommonPrefix(s2)<<endl;

}