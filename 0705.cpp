//
// Created by ShengyunYu on 2019/10/4.
//

#include "common.h"


class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        memset(visited, 0, sizeof(visited));
    }

    void add(int key) {
        visited[key] = true;
    }

    void remove(int key) {
        visited[key] = false;
    }

    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return visited[key];
    }

private:
    bool visited[1000010];
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

