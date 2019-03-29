//
// Created by ShengyunYu on 2019/3/29.
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int rVal = root->val;
        int pVal = p->val;
        int qVal = q->val;
        if (pVal > rVal && qVal > rVal)
            return lowestCommonAncestor(root->right, p, q);
        if (pVal < rVal && qVal < rVal)
            return lowestCommonAncestor(root->left, p, q);
        return root;
    }
};


int main(){

}