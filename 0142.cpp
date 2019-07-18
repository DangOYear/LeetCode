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
    ListNode *detectCycle(ListNode *head) {

        set<ListNode *> nodeSet;

        ListNode *p = head;

        while (p != NULL) {
            if (nodeSet.count(p) == 1)
                return p;
            else
                nodeSet.insert(p);
            p = p->next;
        }

        return p;

    }
};


