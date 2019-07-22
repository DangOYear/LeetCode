//
// Created by ShengyunYu on 2019/7/22.
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
    int numComponents(ListNode* head, vector<int>& G) {
        ListNode* p = head;
        set<int> s;
        for (int i = 0; i < G.size(); ++i) {
            s.insert(G[i]);
        }
        int count = 0;
        bool flag = false;
        while (p) {
            while (p && s.count(p->val) == 1) {
                p = p->next;
                flag = true;
            }
            if (flag) {
                ++count;
                flag = false;
            }
            else {
                p = p->next;
            }
        }
        return count;
    }
};


int main() {
//    head: 0->1->2->3->4
//    G = [0, 3, 1, 4]
//    输出: 2
//    解释:
//    链表中，0 和 1 是相连接的，3 和 4 是相连接的，所以 [0, 1] 和 [3, 4] 是两个组件，故返回 2。
    ListNode* head = new ListNode(0);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    vector<int> G{0, 3, 1, 4};
    Solution solution;
    cout << solution.numComponents(head, G) << endl;
}