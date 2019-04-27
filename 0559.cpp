//
// Created by ShengyunYu on 2019/4/27.
//
#include  "common.h"



// Definition for a Node.
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
    int maxDepth(Node* root) {
        if (!root)
            return 0;
        queue<Node*> q;
        int depth = 0;
        q.push(root);
        while (!q.empty()){
            for (int i = q.size() - 1; i >= 0; --i) {
                Node* p = q.front();
                q.pop();
                for (int j = 0; j < p->children.size(); ++j) {
                    q.push(p->children[j]);
                }
            }
            depth++;
        }
        return depth;
    }

};
