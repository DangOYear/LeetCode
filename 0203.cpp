//
// Created by ShengyunYu on 2019/2/28.
//

#include "common.h"


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return NULL;
        //add a head node
        ListNode *res = new ListNode(0);

        res->next = head;
        ListNode *pre = res;
        ListNode *q = pre->next;
        while (pre && q){
            if (q->val == val){
                pre->next = q->next;

            } else{
                pre = pre->next;
            }
            q = q->next;
        }

        return res->next;
    }
};


int main(){

}