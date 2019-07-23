//
// Created by ShengyunYu on 2019/6/30.
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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> res;
        map<int, int> m;
        int Max = INT_MIN;
        if (root)
            cache[dfs(root)]++;
        for (auto it : cache) {
            Max = max(it.second, Max);
//            cout << "it.first" << it.first << endl;
//            cout << "it.second" << it.second << endl;
//            cout << "Max:" << Max << endl;
        }
        for (auto it : cache) {
            if (it.second == Max)
                res.push_back(it.first);
        }
        return res;
    }

    int dfs(TreeNode* root) {
        if (root == NULL)
            return 0;
        if (root->right == NULL && root->left == NULL) {
            //cache[root->val]++;
            return root->val;
        }
        int res = 0;
        if (root->left) {
            int val = dfs(root->left);
            cache[val]++;
            res += val;
        }
        if (root->right) {
            int val = dfs(root->right);
            cache[val]++;
            res += val;
        }
        res += root->val;
        return res;
    }

private:
    map<int, int> cache;
};


int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(2);
    root->right = new TreeNode(-5);
    Solution solution;
    PrintIntVector(solution.findFrequentTreeSum(root));
}