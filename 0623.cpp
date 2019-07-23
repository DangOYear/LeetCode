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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if (root == NULL) return root;
        if (d == 1) {
            TreeNode* newRoot = new TreeNode(v);
            newRoot->left = root;
            return newRoot;
        }
        queue<TreeNode*> q;
        queue<TreeNode*> dLevelNode;
        q.push(root);
        d = d - 2;
        while (!q.empty()) {


            for (int i = q.size(); i > 0; --i) {
                TreeNode* p = q.front();
                if (d == 0) {
                    dLevelNode.push(p);
                    //cout << p->val << endl;
                }
                q.pop();
                if (p->left)    q.push(p->left);
                if (p->right)   q.push(p->right);
            }

            if (d == 0)
                break;
            d--;
        }

        while (!dLevelNode.empty()) {
            TreeNode* p = dLevelNode.front();
            dLevelNode.pop();
            TreeNode* newLeftNode = new TreeNode(v);
            TreeNode* newRightNode = new TreeNode(v);
            newLeftNode->left = p->left;
            p->left = newLeftNode;

            newRightNode->right = p->right;
            p->right = newRightNode;
        }
        return root;
    }
};

int main() {


    Solution solution;
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(1);

    solution.addOneRow(root, 1, 3);
//   二叉树如下所示:
//       4
//      /
//     2
//    / \
//   3   1
//
//    v = 1
//
//    d = 3

}