//
// Created by ShengyunYu on 2019/3/29.
//

#include "common.h"


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int res = 0;
        if (!root)
            return res;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()){
            TreeNode *p = q.front();
            q.pop();
            if (hasLeftLeaf(p)) res += p->left->val;
            if (p->left)    q.push(p->left);
            if (p->right)   q.push(p->right);
        }
        return res;
    }

    bool hasLeftLeaf(TreeNode *p){
        if (p == NULL || p->left == NULL)
            return false;
        TreeNode *q = p->left;
        if (q->left == NULL && q->right == NULL)
            return true;
        else
            return false;
    }
};


/*
 *
 *  3
   / \
  9  20
    /  \
   15   7
*/


int main(){
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    Solution s;
    cout << s.sumOfLeftLeaves(root) << endl;
}