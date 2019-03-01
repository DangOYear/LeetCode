//
// Created by 虞圣赟 on 2019/1/14.
//

#include "common.h"



//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL || l2 == NULL){
            return l1 == NULL? l2:l1;
        }
        int value = l1->val + l2->val;
        ListNode *result = new ListNode(value % 10);
        result->next = addTwoNumbers(l1->next, l2->next);
        if(value >= 10){
            result->next = addTwoNumbers(result->next, new ListNode(value / 10));
        }
        return result;
    }
};

