/**
 * Author: Deean
 * Date: 2023-04-20 23:49
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

    int dayOfYear(string date) {
        int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int yy, mm, dd;
        sscanf(date.c_str(), "%d-%d-%d", &yy, &mm, &dd);
        if (isLeap(yy)) months[1] = 29;
        for (int i = 1; i < mm; ++i) {
            dd += months[i - 1];
        }
        return dd;
    }
};

int main() {
    auto ans = Solution().dayOfYear("2019-02-10");
    cout << toString(ans) << endl;
    return 0;
}
