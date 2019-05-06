//
// Created by ShengyunYu on 2019/5/5.
//

#include "common.h"


class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> points;
        int sum = 0;
        for (int i = 0; i < ops.size(); ++i) {
            if (ops[i] == "C") {
                points.pop();
            } else{
                if (ops[i] == "D")
                    points.push(points.top() * 2);
                else{
                    if (ops[i] == "+") {
                        int pre_top = points.top();
                        int top = 0;
                        points.pop();
                        top = pre_top + points.top();
                        points.push(pre_top);
                        points.push(top);
                    } else{
                        points.push(stoi(ops[i]));
                    }
                }
            }
        }

        while (!points.empty()){
            sum += points.top();
            points.pop();
        }
        return sum;
    }
};


int main(){
    vector<string> ops1{"5","2","C","D","+"};
    vector<string> ops2{"5","-2","4","C","D","9","+","+"};
    Solution s;
    cout << s.calPoints(ops1) << endl;
    cout << s.calPoints(ops2) << endl;
}