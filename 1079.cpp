//
// Created by ShengyunYu on 2019/8/1.
//

#include "common.h"

class Solution {
public:
    int numTilePossibilities(string tiles) {
        if (tiles.length() == 0)
            return 0;
        int count[26];
        memset(count, 0, sizeof(count));

        for (int i = 0; i < tiles.size(); ++i) {
            count[tiles[i] - 'A']++;
        }
        return dfs(count);
    }

    int dfs(int count[]){
        int sum = 0;
        for (int i = 0; i < 26; ++i) {
            if (count[i] == 0)
                continue;

            sum++;

            count[i]--;

            sum += dfs(count);

            count[i]++;
        }
        return sum;
    }
};



int main() {
    Solution solution;
    string tiles = "AAB";
    cout << solution.numTilePossibilities(tiles) << endl;

    tiles = "AAABBC";
    cout << solution.numTilePossibilities(tiles) << endl;
}