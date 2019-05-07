//
// Created by ShengyunYu on 2019/5/7.
//

#include "common.h"


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        count = 0;
        pre = INT_MIN;
        maxCount = 0;
        inOrder(root);
        return res;
    }

    void inOrder(TreeNode* root) {
        if (root) {
            inOrder(root->left);
            if (root->val == pre) {
                ++count;
            } else{
                count = 0;
            }
            if (count > maxCount) {
                res.clear();
                res.push_back(root->val);
                maxCount = count;
            } else if (count == maxCount) {
                res.push_back(root->val);
            }
            pre = root->val;
            inOrder(root->right);
        }
    }

private:
    vector<int> res;
    int pre;
    int count;
    int maxCount;
};


int main(){

}