/**
 * Author: Deean
 * Date: 2022-09-02 23:12
 * FileName: algorithm/P1266.cpp
 * Description: 1266. 访问所有点的最小时间
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>> &points) {
        int x0 = points[0][0], y0 = points[0][1], count = 0;
        for (int i = 1; i < points.size(); ++i) {
            int x1 = points[i][0], y1 = points[i][1];
            count += max(abs(x1 - x0), abs(y1 - y0));
            x0 = x1;
            y0 = y1;
        }
        return count;
    }
};

int main() {
    vector<vector<int>> points = {{1,  1},{3,  4},{-1, 0}};
    auto ans = Solution().minTimeToVisitAllPoints(points);
    cout << ans << endl;
    return 0;
}