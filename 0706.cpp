//
// Created by ShengyunYu on 2019/4/28.
//

#include "common.h"

class MyHashMap {
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        memset(num, -1, sizeof(num));
    }

    /** value will always be non-negative. */
    void put(int key, int value) {
        num[key] = value;
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        return num[key];
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        num[key] = -1;
    }

private:
    int num[1000010];
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */