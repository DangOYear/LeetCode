//
// Created by ShengyunYu on 2019/7/14.
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        TreeNode* root = NULL;
        if (head == NULL) return root;

        ListNode* fastPtr = head;
        ListNode* slowPtr = head;
        ListNode* prevPtr = NULL;

        while (fastPtr != NULL && fastPtr->next != NULL) {
            prevPtr = slowPtr;
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }

        if (prevPtr != NULL)
            prevPtr->next = NULL;
        root = new TreeNode(slowPtr->val);

        if (head == slowPtr)
            return root;


        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slowPtr->next);
        return root;
    }

};


int main() {

}