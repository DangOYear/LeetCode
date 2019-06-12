//
// Created by ShengyunYu on 2019/6/12.
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
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if (t == NULL)
            return false;
        vector<TreeNode*> nodes;
        inOrder(s, nodes, t->val);
        bool flag = false;
        for (int i = 0; i < nodes.size(); ++i) {
            if (isSame(nodes[i], t))
                flag = true;
        }
        return flag;
    }

    void inOrder(TreeNode* s, vector<TreeNode*> &nodes, int val) {
        if (s) {
            inOrder(s->left, nodes, val);
            if (s->val == val) {
                nodes.push_back(s);
            }
            inOrder(s->right, nodes, val);
        }
    }

    bool isSame(TreeNode* a, TreeNode* b) {
        if (a == NULL && b == NULL)
            return true;
        if (a == NULL && b != NULL)
            return false;
        if (b == NULL && a != NULL)
            return false;
        if (a->val != b->val)
            return false;
        return isSame(a->left, b->left) && isSame(a->right, b->right);
    }
};