//
// Created by ShengyunYu on 2019/9/15.
//

#include "common.h"

//balloon
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count[5];
        memset(count, 0, sizeof(count));
        for (char c:text) {
            switch (c) {
                case 'b':
                    count[0]++;
                    break;
                case 'a':
                    count[1]++;
                    break;
                case 'l':
                    count[2]++;
                    break;
                case 'o':
                    count[3]++;
                    break;
                case 'n':
                    count[4]++;
                    break;
            }
        }
        count[2] /= 2;
        count[3] /= 2;
        int res = count[0];
        for (int i = 1; i < 5; ++i) {
            res = min(res, count[i]);
        }
        return res;
    }
};

int main() {
    Solution solution;
    string text = "nlaebolko";
    cout << solution.maxNumberOfBalloons(text);
}