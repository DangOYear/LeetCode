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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = k;
        ListNode* stack[k];
        ListNode* p = head;
        while (k > 0) {
            stack[count - k] = p;
            if (p)  p = p->next;
            else {return head;}
            k--;
        }
        while (k < count - 1) {
            k++;
            stack[count - k]->next = stack[count - k - 1];
        }
        stack[0]->next = reverseKGroup(p, count);
        return stack[count - 1];
    }
};

int main() {
//    给定这个链表：1->2->3->4->5
//
//    当 k = 2 时，应当返回: 2->1->4->3->5
//
//    当 k = 3 时，应当返回: 3->2->1->4->5
    Solution solution;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    int k = 3;
    PrintLinkList(solution.reverseKGroup(head, k));
}