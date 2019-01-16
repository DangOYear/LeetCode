//
// Created by 虞圣赟 on 2019/1/15.
//

#include "common.h"


class Solution {
public:
    bool isValid(string s) {
        if(s.length() == 0)
            return true;
        stack<char> st;
        st.push(s[0]);
        bool flag = true;
        for(int i=1; i<s.length(); i++){
            switch (s[i]) {
                case ']':
                    if(!st.empty() && st.top()=='[')
                        st.pop();
                    else
                        flag = false;
                    break;
                case '}':
                    if(!st.empty() && st.top()=='{')
                        st.pop();
                    else
                        flag = false;
                    break;
                case ')':
                    if(!st.empty() && st.top()=='(')
                        st.pop();
                    else
                        flag = false;
                    break;
                default:
                    st.push(s[i]);
            }
            if(flag == false)
                return flag;
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};



int main(){
    Solution s;
    cout << s.isValid("()") << endl;
    cout << s.isValid("()[]{}") << endl;
    cout << s.isValid("(]") << endl;
    cout << s.isValid("([)]") << endl;
    cout << s.isValid("{}][}}{[))){}{}){(}]))})[({") << endl;
}