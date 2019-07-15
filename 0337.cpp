//
// Created by ShengyunYu on 2019/7/15.
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
    int rob(TreeNode* root) {
        vector
        int oddlevel = 0;
        int evenlevel = 0;
        int level = 0;
        if (!root) return oddlevel;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            level++;
            int temp = 0;
            for (int i = q.size() - 1; i >= 0; --i) {
                TreeNode* p = q.front();
                q.pop();
                temp += p->val;
                if (p->left)    q.push(p->left);
                if (p->right)   q.push(p->right);
            }
            if (level % 2 == 1) {
                oddlevel += temp;
            } else{
                evenlevel += temp;
            }
        }
        return max(oddlevel, evenlevel);
    }
};


