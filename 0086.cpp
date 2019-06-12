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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessList = new ListNode(0);
        ListNode* greaterList = new ListNode(0);
        ListNode* p = lessList;
        ListNode* q = greaterList;
        while (head != NULL) {
            if (head->val < x) {
                p->next = head;
                head = head->next;
                p = p->next;
                p->next = NULL;
            } else {
                q->next = head;
                head = head->next;
                q = q->next;
                q->next = NULL;
            }


        }
        p->next = greaterList->next;
        return lessList->next;
    }
};

int main() {
    ListNode *root = new ListNode(1);
    root->next = new ListNode(4);
    root->next->next = new ListNode(3);
    root->next->next->next = new ListNode(2);
    root->next->next->next->next = new ListNode(5);
    root->next->next->next->next->next = new ListNode(2);
    PrintLinkList(root);
    Solution s;
    PrintLinkList(s.partition(root, 3));
}