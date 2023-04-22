/**
 * Author: Deean
 * Date: 2023-04-22 19:21
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int process(int x1, int y1, int x2, int y2, int x3, int y3) {
        return abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x2 * y1 - x3 * y2);
    }

    double largestTriangleArea(vector <vector<int>> &points) {
        int area = 0;
        for (int i = 0, n = points.size(); i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    area = max(area, process(points[i][0], points[i][1], points[j][0], points[j][1], points[k][0],
                                             points[k][1]));
                }
            }
        }
        return area * 0.5;
    }
};

int main() {
    vector <vector<int>> points = stringToVector2("[[0,0],[0,1],[1,0],[0,2],[2,0]]");
    auto ans = Solution().largestTriangleArea(points);
    cout << toString(ans) << endl;
    return 0;
}
