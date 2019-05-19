//
// Created by ShengyunYu on 2019/5/19.
//

#include "common.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* HEAD = new ListNode(0);
        HEAD->next = head;
        ListNode* first = HEAD;
        ListNode* second = HEAD;
        for (int i = 0; i <= n; ++i) {
            first = first->next;
        }
        while (first != NULL) {
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
        return HEAD->next;
    }
};