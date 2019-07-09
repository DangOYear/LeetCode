//
// Created by ShengyunYu on 2019/7/9.
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = new ListNode(0);
        ListNode* odd_temp = odd;
        ListNode* even = new ListNode(0);
        ListNode* even_temp = even;
        int count = 0;
        while (head != NULL) {
            ++count;
            if (count % 2 == 1) {
                odd_temp->next = head;
                odd_temp = odd_temp->next;
            } else {
                even_temp->next = head;
                even_temp = even_temp->next;
            }
            head = head->next;
        }
        even_temp->next = NULL;
        odd_temp->next = even->next;
        return odd->next;
    }
};


int main() {
    ListNode* root = new ListNode(1);
    root->next = new ListNode(2);
    root->next->next = new ListNode(3);
    root->next->next->next = new ListNode(4);
    root->next->next->next->next = new ListNode(5);
    Solution s;

    PrintLinkList(s.oddEvenList(root));
}