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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1;
        stack<int> s2;
        ListNode* h1 = l1;
        ListNode* h2 = l2;
        ListNode* head = new ListNode(0);
        int carry = 0;
        while (h1 != NULL) {
            s1.push(h1->val);
            h1 = h1->next;
        }
        while (h2 != NULL) {
            s2.push(h2->val);
            h2 = h2->next;
        }
        while (!s1.empty() || !s2.empty() || carry != 0) {
            int sum = 0;
            if (!s1.empty()) {
                sum += s1.top();
                s1.pop();
            }

            if (!s2.empty()) {
                sum += s2.top();
                s2.pop();
            }

            sum += carry;
            ListNode* node = new ListNode(sum % 10);
            carry = sum / 10;
            node->next = head->next;
            head->next = node;
        }

        return head->next;
    }
};

int main() {
    ListNode* l1 = new ListNode(7);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);
    l1->next->next->next = new ListNode(3);
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    Solution s;
    PrintLinkList(s.addTwoNumbers(l1, l2));
}