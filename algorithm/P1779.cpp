/**
 * Author: Deean
 * Date: 2023-04-16 16:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int nearestValidPoint(int x, int y, vector <vector<int>> &points) {
        int best = numeric_limits<int>::max(), bestID = -1;
        for (int i = 0, n = points.size(); i < n; ++i) {
            int px = points[i][0], py = points[i][1];
            if (x == px || y == py) {
                int dis = abs(px - x) + abs(py - y);
                if (dis < best) {
                    best = dis;
                    bestID = i;
                }
            }
        }
        return bestID;
    }
};

int main() {
    vector <vector<int>> points = stringToVector2("[[1,2],[3,1],[2,4],[2,3],[4,4]]");
    auto ans = Solution().nearestValidPoint(3, 4, points);
    cout << toString(ans) << endl;
    return 0;
}
