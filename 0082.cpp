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
        ListNode* ZeroHead = new ListNode(0);
        ZeroHead->next = head;
        ListNode* pre = ZeroHead;
        ListNode* now = ZeroHead->next;
        while (now) {
            if (now->next && now->next->val == now->val) {
                int temp = now->val;
                while (now && temp == now->val) {
                    now = now->next;
                }
            } else {
                pre->next = now;
                pre = now;
                now = now->next;
            }
        }
        pre->next = now;
        return ZeroHead->next;
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