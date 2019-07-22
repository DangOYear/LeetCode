//
// Created by ShengyunYu on 2019/7/21.
//

#include "common.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        TreeNode* p = root;
        while(p != NULL) {
            inorder.push(p);
            p = p->left;
        }
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* cur = inorder.top();
        inorder.pop();
        int nextNum = cur->val;
        cur = cur->right;
        while (cur) {
            inorder.push(cur);
            cur = cur->left;
        }
        return nextNum;
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !inorder.empty();
    }

private:
    stack<TreeNode*> inorder;
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
int main() {

}

//BSTIterator iterator = new BSTIterator(root);
//iterator.next();    // 返回 3
//iterator.next();    // 返回 7
//iterator.hasNext(); // 返回 true
//iterator.next();    // 返回 9
//iterator.hasNext(); // 返回 true
//iterator.next();    // 返回 15
//iterator.hasNext(); // 返回 true
//iterator.next();    // 返回 20
//iterator.hasNext(); // 返回 false
