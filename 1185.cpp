//
// Created by ShengyunYu on 2019/9/9.
//
#include "common.h"


class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> weekName{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int daysTillMonth[12] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
        int totalDays = 4 + day + (month > 2 && isLeap(year) ? 1 : 0);
        for (int y = 1971; y < year; ++y) totalDays += isLeap(y) ? 366 : 365;
        return weekName[(totalDays + daysTillMonth[month - 1]) % 7];
    }

    bool isLeap(int y) {
        return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
    }
};

int main() {
    int day = 31, month = 8, year = 2019;
    Solution solution;

    cout << solution.dayOfTheWeek(day, month, year);
}