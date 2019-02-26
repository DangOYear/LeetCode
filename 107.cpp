//
// Created by ShengyunYu on 2019/2/27.
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        //stack<vector<int>> s;

        vector<vector<int>> res;
        if (!root)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            vector<int> v;
            for (int i = q.size() - 1; i >= 0; --i) {
                TreeNode *temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if (temp->left)    q.push(temp->left);
                if (temp->right)    q.push(temp->right);
            }
            res.insert(res.begin(),v);
        }
        return res;
    }
};


void print(vector<vector<int>> v){
    for (int i = 0; i < v.size(); ++i) {
        cout << "[" ;
        for (int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << " ";
        }
        cout << "]" << endl;
    }
}

int main(){
    Solution s;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    print(s.levelOrderBottom(root));
}