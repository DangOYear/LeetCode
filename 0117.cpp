//
// Created by ShengyunYu on 2019/8/1.
//



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