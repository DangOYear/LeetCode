//
// Created by ShengyunYu on 2019/9/13.
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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if (!root) return NULL;
        int left = getDepth(root->left);
        int right = getDepth(root->right);
        if (left == right)
            return root;
        return (left > right) ? lcaDeepestLeaves(root->left):lcaDeepestLeaves(root->right);
    }

    int getDepth(TreeNode* root) {
        if (!root) return 0;
        if (cache.count(root) == 1) return cache[root];
        cache[root] = 1 + max(getDepth(root->left), getDepth(root->right));
        return cache[root];
    }

private:
    unordered_map<TreeNode*, int> cache;
};

