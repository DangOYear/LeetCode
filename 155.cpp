//
// Created by ShengyunYu on 2019/2/4.
//

#include <iostream>
#include <stack>
using namespace std;


class MinStack {
public:
    stack
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {

    }

    void pop() {

    }

    int top() {

    }

    int getMin() {

    }
};


int main(){
    MinStack *minStack = new MinStack();
    minStack->push(-2);
    minStack->push(0);
    minStack->push(-3);
    cout << minStack->getMin() << endl;
    minStack->pop();
    cout << minStack->top() << endl;
    cout << minStack->getMin() << endl;
}