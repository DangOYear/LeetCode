//
// Created by 虞圣赟 on 2019/1/14.
//


#include "common.h"


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, left = -1, len = s.size();
        unordered_map<int,int> m;
        for(int i = 0; i < len; i++){
            if(m.count(s[i]) && m[s[i]] > left){
                left = m[s[i]];
            }
            m[s[i]] = i;
            res = max(res, i-left);
        }
        return res;
    }
};


int main(){
    Solution s;
    cout<<s.lengthOfLongestSubstring("abcabcbb")<<endl;
    cout<<s.lengthOfLongestSubstring("bbbbb")<<endl;
    cout<<s.lengthOfLongestSubstring("pwwkew")<<endl;
}