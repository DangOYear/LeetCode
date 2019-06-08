//
// Created by ShengyunYu on 2019/6/8.
//

#include "common.h"

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        queue<int> temp;
        while (q.size() != 1) {
            int tmp = q.front();
            q.pop();
            temp.push(tmp);
        }
        int res = q.front();
        q = temp;
        return res;
    }


    /** Get the top element. */
    int top() {
        int res = pop();
        q.push(res);
        return res;
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }

private:
    queue <int> q;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */