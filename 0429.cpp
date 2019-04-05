//
// Created by ShengyunYu on 2019/4/5.
//

#include "common.h"


class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if (!root) return res;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()){
            vector<int> level;
            for (int i = q.size(); i > 0; --i) {
                Node* p = q.front();
                q.pop();
                level.push_back(p->val);
                for (int j = 0; j < p->children.size(); ++j) {
                    q.push(p->children[j]);
                }
            }
            res.push_back(level);
        }
        return res;
    }
};