//
// Created by ShengyunYu on 2019/9/17.
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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        cache[NULL] = -1;
        preOrder(root, NULL);
        int maxDepth = INT_MIN;
        for (auto m:cache) {
            maxDepth = max(maxDepth, m.second);
        }

        return findDeepestParent(root, maxDepth);
    }

    void preOrder(TreeNode* root, TreeNode* parent) {
        if (root) {
            cache[root] = cache[parent] + 1;
            preOrder(root->left, root);
            preOrder(root->right, root);
        }
    }


    TreeNode* findDeepestParent(TreeNode* root, int maxDepth) {
        if (root == NULL || cache[root] == maxDepth) {
            return root;
        }

        TreeNode* left = findDeepestParent(root->left, maxDepth);
        TreeNode* right = findDeepestParent(root->right, maxDepth);
        if (left != NULL && right != NULL) return root;
        if (left != NULL) return left;
        if (right != NULL) return right;
        return NULL;
    }

private:
    map<TreeNode*,int> cache;
};

int main() {
    Solution solution;
}

