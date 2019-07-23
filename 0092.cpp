//
// Created by ShengyunYu on 2019/6/10.
//
#include "common.h"



class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* stack[n - m + 1];
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* p = dummy;
        ListNode* left, *right;
        for (int k = 0; k < m - 1; ++k) {
            p = p->next;
        }
        left = p;

        for (int i = m; i <= n; ++i) {

            p = p->next;
            stack[i - m] = p;

        }
        right = p->next;

        for (int j = n - m; j > 0; --j) {
            stack[j]->next = stack[j - 1];
        }
        left->next = stack[n - m];
        stack[0]->next = right;
        return dummy->next;
    }
};


int main() {
//    反转从位置 m 到 n 的链表。请使用一趟扫描完成反转。
//
//    说明:
//    1 ≤ m ≤ n ≤ 链表长度。
//
//    示例:
//
//    输入: 1->2->3->4->5->NULL, m = 2, n = 4
//    输出: 1->4->3->2->5->NULL
    Solution solution;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    int m = 1;
    int n = 4;
    PrintLinkList(solution.reverseBetween(head, m, n));
    
}