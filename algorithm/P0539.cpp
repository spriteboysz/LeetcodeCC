/**
 * Author: Deean
 * Date: 2023-07-23 14:17
 * FileName: algorithm
 * Description:539. 最小时间差
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
private:
    int process(string &t) {
        return (int(t[0] - '0') * 10 + int(t[1] - '0')) * 60 + int(t[3] - '0') * 10 + int(t[4] - '0');
    }

public:
    int findMinDifference(vector <string> &timePoints) {
        int n = timePoints.size();
        if (n > 1440) {
            return 0;
        }
        sort(timePoints.begin(), timePoints.end());
        int minimum = INT_MAX;
        int t0Minutes = process(timePoints[0]);
        int preMinutes = t0Minutes;
        for (int i = 1; i < n; ++i) {
            int minutes = process(timePoints[i]);
            minimum = min(minimum, minutes - preMinutes);
            preMinutes = minutes;
        }
        return min(minimum, t0Minutes + 1440 - preMinutes);
    }
};

int main() {
    vector <string> timePoints = {"00:00", "23:59", "00:00"};
    auto ans = Solution().findMinDifference(timePoints);
    cout << toString(ans) << endl;
    return 0;
}
