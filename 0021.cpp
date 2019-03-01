//
// Created by 虞圣赟 on 2019/1/15.
//

#include "common.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode *p = head;
        if(l1 == NULL || l2 == NULL)
            return l1 == NULL?l2:l1;
        while(l1 != NULL && l2 != NULL){
            if(l1->val < l2->val){
                p->next = l1;
                l1 = l1->next;
                p = p->next;
            }
            else{
                p->next = l2;
                l2 = l2->next;
                p = p->next;
            }

        }
        while (l1 != NULL){
            p->next = l1;
            l1 = l1->next;
            p = p->next;
        }
        while (l2 != NULL){
            p->next = l2;
            l2 = l2->next;
            p = p->next;
        }
        p = head->next;
        delete head;
        return p;
    }
};

int main(){

}