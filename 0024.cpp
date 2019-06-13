//
// Created by ShengyunYu on 2019/6/12.
//

#include "common.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* nextNode = head->next;
        head->next = swapPairs(nextNode->next);
        nextNode->next = head;
        return nextNode;
    }
};