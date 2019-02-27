//
// Created by ShengyunYu on 2019/2/27.
//

#include "common.h"



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return NULL;
        int lenA = getListLength(headA);
        int lenB = getListLength(headB);
        ListNode *pA = headA;
        ListNode *pB = headB;
        int l = lenA < lenB ? lenB-lenA : lenA-lenB;
        if (lenA < lenB){
            while (l--){pB = pB->next;}
        } else{
            while (l--){pA = pA->next;}
        }
        while (pA && pB && pA != pB){
            pA = pA->next;
            pB = pB->next;
        }
        return (pA && pB) ? pA : NULL;
    }

    int getListLength(ListNode *head){
        int count = 0;
        while (head){
            ++count;
            head = head->next;
        }
        return count;
    }
};


int main(){

}