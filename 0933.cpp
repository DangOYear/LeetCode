//
// Created by ShengyunYu on 2019/6/9.
//

#include "common.h"


class RecentCounter {
public:
    RecentCounter() {

    }

    int ping(int t) {
        v.push_back(t);
        int count = 0;
        for (int i = v.size() - 1; i >= 0; --i) {
            if (t - v[i] <= 3000)
                ++count;
            else
                break;
        }
        return count;
    }

private:
    vector<int> v;
};


/*
class RecentCounter {
public:
    RecentCounter() {

    }

    int ping(int t) {
        v.push_back(t);
        int count = 0;
        for (int i = v.size() - 1; i >= 0; --i) {
            if (t - v[i] <= 3000)
                ++count;
            else
                break;
        }
        return count;
    }

private:
    vector<int> v;
};


*/


/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */


