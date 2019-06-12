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
                temp = temp.substr(1, temp.size() - 1);
            }
            temp += "ma";
            string a(count, 'a');
            temp += a;
            count++;
            temp += " ";
            res += temp;
        }

        return res.substr(0, res.length() - 1);
        //return temp;

    }

    bool isAEIOU(char c) {
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                return true;
            default:
                return false;

        }
    }
};

int main() {
    Solution s;
    string S = "I speak Goat Latin";
    cout << s.toGoatLatin(S) << endl;
    PrintBool(s.toGoatLatin(S) == "Imaa peaksmaaa oatGmaaaa atinLmaaaaa");

    string S1 = "The quick brown fox jumped over the lazy dog";
    cout << s.toGoatLatin(S1) << endl;
    PrintBool(s.toGoatLatin(S) == "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa");

}
