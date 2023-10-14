/**
 * Author: Deean
 * Date: 2023-10-11 22:50
 * FileName: LCP
 * Description: LCR 035. 最小时间差
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findMinDifference(vector <string> &timePoints) {
        unordered_set <string> seen;
        for (const auto &point: timePoints) {
            seen.emplace(point);
        }
        if (timePoints.size() != seen.size()) return 0;

        std::sort(timePoints.begin(), timePoints.end());
        vector<int> points;
        for (const auto &point: timePoints) {
            points.push_back((point[0] - '0') * 600 + (point[1] - '0') * 60 + (point[3] - '0') * 10 + point[4] - '0');
        }
        int minimum = 1440;
        for (int i = 0; i < points.size() - 1; ++i) {
            minimum = min(minimum, points[i + 1] - points[i]);
        }
        return min(minimum, 1440 + points[0] - points[points.size() - 1]);
    }
};

int main() {
    vector <string> timePoints = {"00:01", "23:58", "00:00"};
    auto ans = Solution().findMinDifference(timePoints);
    cout << toString(ans) << endl;
    return 0;
}