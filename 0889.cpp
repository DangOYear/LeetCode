//
// Created by ShengyunYu on 2019/9/14.
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
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        TreeNode* root = construct(pre, post, 0, pre.size() - 1, 0, post.size() - 1);
        return root;
    }

    TreeNode* construct(vector<int>& pre, vector<int>& post, int preLeft, int preRight, int postLeft, int postRight) {
        if (preRight - preLeft < 0) return NULL;
        TreeNode* root = new TreeNode(pre[preLeft]);
        if (preRight - preLeft == 0) return root;
        int L = 0;
        for (int i = postLeft; i <= postRight; ++i) {
            if (post[i] == pre[preLeft + 1]) {
                L = i;
                break;
            }
        }
        root->left = construct(pre, post, preLeft + 1, L - postLeft + preLeft + 1, postLeft, L);
        root->right = construct(pre, post, preRight - postRight + 2 + L, preRight, L + 1, postRight - 1);
        return root;
    }

};


int main() {
    vector<int> pre{1,2,4,5,3,6,7};
    vector<int> post{4,5,2,6,7,3,1};
    Solution solution;
    solution.constructFromPrePost(pre, post);
}

