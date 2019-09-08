//
// Created by 虞圣赟 on 2019/1/14.
//

#ifndef LEETCODE_COMMON_H
#define LEETCODE_COMMON_H

#endif //LEETCODE_COMMON_H


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <stack>
#include <queue>
#include <unordered_map>
#include <set>
#include <utility>
#include <map>

#include <sstream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



void PrintIntVector(vector<int> v) {
    cout << "vector<int>:";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void PrintIntVectorVector(vector<vector<int>> v) {
    cout << "[" << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << "  [";
        for (int j = 0; j < v[i].size(); ++j) {
            cout << " " << v[i][j];
        }
        cout << "]" << endl;
    }

    cout << "]" << endl;
}


void PrintCharVectorVector(vector<vector<char >> v) {
    cout << "[" << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << "  [";
        for (int j = 0; j < v[i].size(); ++j) {
            cout << " " << v[i][j];
        }
        cout << "]" << endl;
    }

    cout << "]" << endl;
}


void PrintStringVector(vector<string> v) {
    cout << "vector<string>:" << endl;
    cout << "[" << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << "   " << v[i] << endl;
    }
    cout <<"]"<< endl;
}


void levelTravel(TreeNode* root) {
    if (root == NULL)
        return;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {

    }
}


void PrintBool(bool flag) {
    if (flag)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

void PrintLinkList(ListNode* root) {
    while (root) {
        cout << root->val << " ";
        root = root->next;
    }
    cout << endl;
}

//0290可以优化
//0933可以用二分优化
//0215可以用快速排序进行优化

//todo 0208
//1094可以用map优化少占内存
//0162
//1007可以优化