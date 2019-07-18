//
// Created by ShengyunYu on 2019/7/18.
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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL)
            return NULL;
        ListNode* oldtail = head;
        int listLen = 1;
        while (oldtail->next != NULL) {
            oldtail = oldtail->next;
            listLen++;
        }
        oldtail->next = head;
        ListNode* newtail = head;
        for (int i = 0; i < listLen - k % listLen - 1; ++i) {
            newtail = newtail->next;
        }
        ListNode* newhead = newtail->next;
        newtail->next = NULL;
        return newhead;
    }
};


int main() {
    //0->1->2->NULL
    ListNode* head = new ListNode(0);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    Solution s;
    PrintLinkList(s.rotateRight(head, 4));
}