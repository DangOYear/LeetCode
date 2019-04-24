//
// Created by ShengyunYu on 2019/4/24.
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root)
            return res;
        bool flag = false;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()){
            vector<int> level;
            for (int i = q.size(); i > 0; --i) {
                TreeNode *p = q.front();
                q.pop();
                level.push_back(p->val);
                if (p->left)    q.push(p->left);
                if (p->right)   q.push(p->right);
            }
            if (flag)
                reverse(level.begin(), level.end());
            flag = !flag;
            //cout << flag << endl;
            res.push_back(level);
        }
        return res;
    }
};


int main(){

}