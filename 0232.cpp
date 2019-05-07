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

    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {

    }

    /** Get the front element. */
    int peek() {

    }

    /** Returns whether the queue is empty. */
    bool empty() {

    }
};

int main() {
    MyQueue* obj = new MyQueue();
    obj->push(1);
    obj->push(2);

    cout << obj->peek() << endl;
    cout << obj->pop() << endl;
    cout << obj->empty() << endl;

}