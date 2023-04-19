/**
 * Author: Deean
 * Date: 2023-04-19 22:12
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

    int process(string date) {
        int months[] = {31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
        int yy, mm, dd;
        sscanf(date.c_str(), "%d-%d-%d", &yy, &mm, &dd);
        for (int i = 1970; i < yy; ++i) {
            if (isLeap(i)) {
                dd += 366;
            } else {
                dd += 365;
            }
        }
        if (isLeap(yy)) months[2] = 29;
        for (int i = 0; i < mm; ++i) {
            dd += months[i];
        }
        return dd;
    }

    int daysBetweenDates(string date1, string date2) {
        return abs(process(date1) - process(date2));
    }
};

int main() {
    auto ans = Solution().daysBetweenDates("2020-01-15", "2019-12-31");
    cout << toString(ans) << endl;
    return 0;
}
