//
// Created by ShengyunYu on 2019/7/20.
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
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
        this->head = head;
        srand(time(NULL));
    }

    /** Returns a random node's value. */
    int getRandom() {

        ListNode* res = head;
        if (res == NULL)
            return -1;
        int result = res->val;
        int count = 0;
        while(res->next){
            count++;

            if(rand() % (count + 1) == 0){
                result = res->next->val;
            }
            res = res->next;

        }
        return result;
    }

private:
    ListNode* head;
};


/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */


int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    Solution s(head);
    int i = 1;
    int count[] = {0, 0, 0};
    while (i) {
        if (i != 3000000) {
            count[s.getRandom() % 3]++;
        } else
            break;
        cout << "i:" << i << endl;
        i++;
    }
    cout << count[0] << " " << count[1] << " " << count[2];
}