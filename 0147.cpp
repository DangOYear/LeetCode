//
// Created by ShengyunYu on 2019/7/22.
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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* p = head;
        while (p != NULL) {
            ListNode* cur = dummy;
            ListNode* nextNum = p->next;
            while (cur->next != NULL && cur->next->val < p->val) {
                cur = cur->next;
            }

            p->next = cur->next;
            cur->next = p;
            p = nextNum;

        }
        return dummy->next;
    }
};

int main() {

//    输入: 4->2->1->3
//    输出: 1->2->3->4
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);
    Solution solution;
    PrintLinkList(solution.insertionSortList(head));
}