//
// Created by ShengyunYu on 2019/2/4.
//

#include "common.h"
using namespace std;


class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        m.insert(x);
        s.push(x);
    }

    void pop() {
        m.erase(m.find(s.top()));
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return *(m.begin());
    }

private:
    stack<int> s;
    multiset<int> m;
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