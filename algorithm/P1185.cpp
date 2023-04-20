/**
 * Author: Deean
 * Date: 2023-04-20 23:25
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isLeap(int year) {
        return year % 400 == 0 || (year % 100 != 0 && year % 4 == 0);
    }

    string dayOfTheWeek(int day, int month, int year) {
        vector <string> weekday = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (int i = 1970; i < year; ++i) {
            if (isLeap(i)) {
                day += 366;
            } else {
                day += 365;
            }
        }
        if (isLeap(year)) months[1] = 29;
        for (int i = 1; i < month; ++i) {
            day += months[i - 1];
        }
        return weekday[(day + 3) % 7];
    }
};

int main() {
    auto ans = Solution().dayOfTheWeek(31, 8, 2019);
    cout << toString(ans) << endl;
    return 0;
}
