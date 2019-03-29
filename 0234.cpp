//
// Created by ShengyunYu on 2019/3/29.
//

#include "common.h"



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int len = getlength(head);
        cout << len << endl;
        ListNode *p = head;
        bool flag = true;
        stack<ListNode *> s;

        for (int i = 0; i < len / 2; ++i) {
            s.push(p);
            p = p->next;
        }
        if (len % 2 == 1){
            p = p->next;
        }
        while (p && !s.empty()){
            if (p->val == s.top()->val){
                p = p->next;
                s.pop();
            } else{
                flag = false;
                break;
            }
        }
        return flag;
    }
    int getlength(ListNode* head){
        int length = 0;
        while (head){
            head = head->next;
            ++length;
        }
        return length;
    }

};

void Print(ListNode *root){
    cout << endl;
    while (root){
        cout << root->val <<" ";
        root = root->next;
    }
    cout << endl;
}

int main(){
    ListNode *root = new ListNode(1);
    ListNode *p = root;
    p->next = new ListNode(2);
    p = p->next;
    p->next = new ListNode(2);
    p = p->next;
    p->next = new ListNode(1);
    Print(root);
    Solution s;
    cout << s.isPalindrome(root) << endl;
}