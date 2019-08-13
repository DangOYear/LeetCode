//
// Created by ShengyunYu on 2019/8/13.
//

#include "common.h"


class Solution {
public:
    int dayOfYear(string date) {

        int year = stoi((string)date.substr(0, 4));
        int month = stoi((string)date.substr(5, 2));
        int day = stoi((string)date.substr(8, 2));
        int res = 0;
        bool leapYear = isLeapYear(year);

        for (int i = 1; i < month; ++i) {
            switch (i) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    res += 31;
                    break;
                case 2:
                    res += (leapYear)?29:28;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    res += 30;
                    break;
            }
        }
        res += day;
        return res;
    }

    bool isLeapYear(int year) {
        if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution solution;

    string date = "2019-01-09";
    cout << solution.dayOfYear(date) << endl;

    date = "2019-02-10";
    cout << solution.dayOfYear(date) << endl;

    date = "2003-03-01";
    cout << solution.dayOfYear(date) << endl;

    date = "2004-03-01";
    cout << solution.dayOfYear(date) << endl;
}