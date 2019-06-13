//
// Created by ShengyunYu on 2019/6/12.
//

#include "common.h"



// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};


class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL)
            return NULL;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* pre = NULL;
            for (int i = q.size() - 1; i >= 0; --i) {
                Node* node = q.front();
                q.pop();
                if (pre != NULL) pre->next = node;
                pre = node;
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

        }
        return root;
    }
};
