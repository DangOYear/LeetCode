//
// Created by ShengyunYu on 2019/5/7.
//
#include "common.h"

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        s.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        stack<int> temp;
        while (s.size() > 1) {
            int tmp = s.top();
            s.pop();
            temp.push(tmp);
        }
        int res = s.top();
        s.pop();
        while (!temp.empty()) {
            int tmp = temp.top();
            temp.pop();
            s.push(tmp);
        }
        return res;
    }

    /** Get the front element. */
    int peek() {
        stack<int> temp;
        while (s.size() > 1) {
            int tmp = s.top();
            s.pop();
            temp.push(tmp);
        }
        int res = s.top();
        while (!temp.empty()) {
            int tmp = temp.top();
            temp.pop();
            s.push(tmp);
        }
        return res;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return s.empty();
    }

private:
    stack<int> s;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main() {
    MyQueue* obj = new MyQueue();
    obj->push(1);
    obj->push(2);

    cout << obj->peek() << endl;
    cout << obj->pop() << endl;
    cout << obj->empty() << endl;

}