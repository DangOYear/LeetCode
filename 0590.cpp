//
// Created by ShengyunYu on 2019/4/27.
//


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
    vector<int> postorder(Node* root) {
        if (root){
            for (int i = 0; i < root->children.size(); ++i) {
                postorder(root->children[i]);
            }
            traversal.push_back(root->val);
        }
        return traversal;
    }

private:
    vector<int> traversal;
};