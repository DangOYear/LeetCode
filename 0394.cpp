//
// Created by ShengyunYu on 2019/7/14.
//

#include "common.h"

class Solution {
public:
    string decodeString(string s) {
        string res = "";

        for (int i = 0; i < s.length(); ++i) {
            int num_pos = s.find('[');
            int num = stoi(s.substr(0, num_pos));
            int alpha = s.find(']');
            string temp = s.substr(num_pos, alpha);
            cout << temp << endl;
        }
        return res;
    }
};

int main() {
    Solution s;
    string S1 = "3[a]2[bc]";
    cout << s.decodeString(S1) << endl;


    string S2 = "3[a2[c]]";
    cout << s.decodeString(S2) << endl;

    string S3 = "2[abc]3[cd]ef";
    cout << s.decodeString(S3) << endl;
}