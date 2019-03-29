//
// Created by ShengyunYu on 2019/3/29.
//

#include "common.h"


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) return NULL;
        stack<ListNode *> s;
        ListNode *p = head;
        while (p->next){
            s.push(p);
            p = p->next;
        }
        head = p;
        while (!s.empty()){
            p->next = s.top();
            p = p->next;
            s.pop();
        }
        p->next = NULL;
        return head;
    }
};


int main(){



}