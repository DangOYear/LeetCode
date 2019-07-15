//
// Created by ShengyunYu on 2019/6/10.
//
#include "common.h"





class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        stack<int> s;
        int i = 0;
        ListNode* pHead = head;
        while (i < m) {
            pHead = pHead->next;
            ++i;
        }

        for (int j = m; j <= n; ++j) {

        }
    }
};


int main() {

}