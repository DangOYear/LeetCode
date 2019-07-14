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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* left = head;
        ListNode* right = head->next;
        while (right!= NULL) {
            while (right->val == left->val)
                right = right->next;
            if (right != NULL) {
                left->next = right;
                left = left->next;
                right = left->next;
            }

        }
        return head;
    }
};

int main() {
    ListNode* root = new ListNode(1);
    root->next = new ListNode(1);
    root->next->next = new ListNode(1);
    root->next->next->next = new ListNode(2);
    root->next->next->next->next = new ListNode(3);
    Solution s;
    PrintLinkList(s.deleteDuplicates(root));
}