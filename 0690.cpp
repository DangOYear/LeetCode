//
// Created by ShengyunYu on 2019/4/28.
//

#include "common.h"


// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        map<int, int> idToIndex;
        int res = 0;
        for (int i = 0; i < employees.size(); ++i) {
            idToIndex[employees[i]->id] = i;
        }
        queue<int> ids;
        ids.push(id);
        while (!ids.empty()){
            int ID = ids.front();
            ids.pop();
            res += employees[idToIndex[ID]]->importance;
            for (int i = 0; i < employees[idToIndex[ID]]->subordinates.size(); ++i) {
                ids.push(employees[idToIndex[ID]]->subordinates[i]);
            }
        }
        return res;
    }
};