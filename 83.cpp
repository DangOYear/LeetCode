//
// Created by ShengyunYu on 2019/2/4.
//

#include <iostream>
#include <algorithm>
using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p = head;
        ListNode *q;
        while (p != NULL){
            if (!p->next)
                break;
            q = p->next;
            if (p->val == q->val) {
                p->next = q->next;
                delete (q);
            } else {
                p = p->next;
            }
        }
        return head;
    }
};


int main(){
    ListNode *root =
}