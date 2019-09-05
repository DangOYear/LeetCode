//
// Created by ShengyunYu on 2019/8/3.
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
    TreeNode* recoverFromPreorder(string S) {
        int in = 0;
        int level = 0;
        return util(in, S, level);
    }


    TreeNode* util(int &in, string& S, int level) {
        if (in >= S.length()) return NULL;

        int count = 0;
        while (S[in + count] == '-') ++count;

        if (count == level) {
            in += count;
            int val = 0;

            while (isdigit(S[in])) {
                val = val * 10 + S[in] - '0';
                ++in;
            }

            TreeNode* node = new TreeNode(val);
            node->left = util(in, S, level + 1);
            node->right = util(in, S, level + 1);
            return node;
        }
        return NULL;
    }
};


int main() {
    Solution solution;
    string S = "1-401--349---90--88";
    TreeNode* root = solution.recoverFromPreorder(S);

}