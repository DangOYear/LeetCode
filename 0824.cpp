//
// Created by ShengyunYu on 2019/6/11.
//

#include "common.h"


class Solution {
public:
    string toGoatLatin(string S) {
        string test(9,'a');
        string res = "";
        stringstream is(S);
        //is.str(S);
        string temp;
        int count = 1;
        while (is >> temp) {
            if (!isAEIOU(temp[0])) {
                temp += temp[0];
                temp.substr(1, temp.size() - 1);
            }
            temp += 'ma';
            string a(count, 'a');
            temp += a;
        }

        //return temp;

    }

    bool isAEIOU(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return true;
        }
        return false;
    }
};

int main() {
    Solution s;
    string S = "I speak Goat Latin";
    PrintBool(s.toGoatLatin(S) == "Imaa peaksmaaa oatGmaaaa atinLmaaaaa");

    string S1 = "The quick brown fox jumped over the lazy dog";
    PrintBool(s.toGoatLatin(S) == "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa");

}
