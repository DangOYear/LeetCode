//
// Created by ShengyunYu on 2019/2/23.
//

#include <iostream>
using namespace std;





struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        preOrder(root, nullptr, x, y, 0);
        return (x_depth == y_depth) && (x_father != y_father);
    }


    void preOrder(TreeNode* root,TreeNode* father, int x, int y, int depth){
        if (!root) return ;
        if (root->val == x){
            x_father = father;
            x_depth = depth;
        }
        if (root->val == y){
            y_father = father;
            y_depth = depth;
        }

        preOrder(root->left, root, x, y, depth + 1);
        preOrder(root->right, root, x, y, depth + 1);


    }

private:
    TreeNode *x_father;
    TreeNode* y_father;
    int x_depth;
    int y_depth;
};


int main(){
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(5);
    cout << s.isCousins(root,5,4) << endl;

}