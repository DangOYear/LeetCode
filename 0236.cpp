//
// Created by ShengyunYu on 2019/7/23.
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        vector<TreeNode*> Path;
        dfs(root, q, Path, qPath);
        dfs(root, p, Path, pPath);
        int i;
        for (i = 0; i < qPath.size() && i < pPath.size(); ++i) {
            if (pPath[i] != qPath[i]) {
                break;
            }
        }
        return qPath[i - 1];
    }

    void dfs(TreeNode* root, TreeNode* p, TreeNode* q, vector<TreeNode*> Path, vector<TreeNode*> &resPath) {
        if (root == NULL)
            return;
        if (root == p) {
            Path.push_back(root);
            resPath = Path;
        }

        if (root == q) {
            Path.push_back(root);
            resPath = Path;
        }

        Path.push_back(root);
        dfs(root->left, find, Path, resPath);
        dfs(root->right, find, Path, resPath);

    }

private:
    vector<TreeNode*> pPath;
    vector<TreeNode*> qPath;

};




int main() {

}