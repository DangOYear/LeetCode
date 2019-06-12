//
// Created by ShengyunYu on 2019/5/5.
//

#include "common.h"


class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        preOrder(root);
        if (p.size() < 2)
            return -1;
        int max = p.top();
        p.pop();

        return max == p.top() ? -1 : p.top();
    }

    void preOrder(TreeNode* root)  {
        if (root) {
            preOrder(root->left);
            if (root->left == NULL && root->right == NULL) {
                if (value.count(root->val) == 0) {
                    value.insert(root->val);
                    p.push(root->val);
                }
            }
            preOrder(root->right);
        }
    }

private:
    priority_queue<int, vector<int> , greater<int>> p;
    set<int> value;
};
