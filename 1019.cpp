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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> res;

        stack<pair<int, int>> stack1;
        ListNode* p = head;
        int count = 0;
        while (p) {
            res.push_back(0);
            while (!stack1.empty() && p->val > stack1.top().first) {
                int index = stack1.top().second;
                stack1.pop();
                res[index] = p->val;
            }
            stack1.push({p->val, count++});
            p = p->next;
        }
        return res;
    }
};


int main() {
    Solution solution;
    ListNode* root = new ListNode(2);
    root->next = new ListNode(1);
    root->next->next = new ListNode(5);
    PrintIntVector(solution.nextLargerNodes(root));
}