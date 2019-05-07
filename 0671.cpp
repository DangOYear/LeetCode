//
// Created by ShengyunYu on 2019/5/5.
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
    int findSecondMinimumValue(TreeNode* root) {
        preOrder(root);
        if (p.size() < 2)
            return -1;
        p.pop();
        return p.top();
    }

    void preOrder(TreeNode* root)  {
        if (root) {
            preOrder(root->left);
            if (root->left == NULL && root->right == NULL)
                p.push(root->val);
            preOrder(root->right);
        }
    }

private:
    priority_queue<int> p;
    //set<int> value;
};
