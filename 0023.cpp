//
// Created by ShengyunYu on 2019/6/11.
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int> pq;
        for (int i = 0; i < lists.size(); ++i) {
            ListNode* node = lists[i];
            while (node != NULL) {
                pq.push(node->val);
                node = node->next;
            }
        }

        ListNode* head = new ListNode(0);
        while (!pq.empty()) {
            ListNode* node = new ListNode(pq.top());
            pq.pop();
            node->next = head->next;
            head->next = node;
        }
        return head->next;

    }

};


int main() {

}