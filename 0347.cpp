//
// Created by ShengyunYu on 2019/6/30.
//

#include "common.h"




class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        priority_queue<pair<int, int>> pq;
        unordered_map<int, int> umap;

        for (auto num : nums) {
            ++umap[num];
        }

        for (auto it : umap) {
            pq.push({it.second, it.first});
        }

        for (int i = 0; i < k; ++i) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};


int main() {
    Solution solution;
    vector<int> nums{1,1,1,2,2,3};
    int k = 2;
    PrintIntVector(solution.topKFrequent(nums, k));

}