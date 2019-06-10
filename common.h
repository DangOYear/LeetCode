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



void PrintVector(vector<int> v) {
    cout << "vector<int>:";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
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

    }
    cout << endl;
}

//0290可以优化
//0933可以用二分优化
