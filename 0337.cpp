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

    int max_with_root(TreeNode* root) {
        if (root == NULL)
            return 0;
        return root->val + max_without_root(root->left) + max_without_root(root->right);
    }

    int max_without_root(TreeNode* root) {
        if (root == NULL)
            return 0;
        return steal(root->left) + steal(root->right);
    }


    int steal(TreeNode* root) {
        if (cache.count(root) >= 1)
            return cache[root];
        cache[root] = max(max_without_root(root), max_with_root(root));
        return cache[root];
    }


    int rob(TreeNode* root) {
        return steal(root);
    }

private:
    map<TreeNode*, int> cache;
};


