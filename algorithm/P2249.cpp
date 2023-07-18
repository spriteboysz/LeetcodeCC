/**
 * Author: Deean
 * Date: 2023-07-17 23:26
 * FileName: algorithm
 * Description:2249. 统计圆内格点数目
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countLatticePoints(vector <vector<int>> &circles) {
        unordered_set<int> visited;
        for (auto circle: circles) {
            int x = circle[0], y = circle[1], r = circle[2];
            for (int i = x - r; i <= x + r; ++i) {
                for (int j = y - r; j <= y + r; ++j) {
                    if ((i - x) * (i - x) + (j - y) * (j - y) <= r * r) {
                        visited.insert(i * 1000 + j);
                    }
                }
            }
        }
        return visited.size();
    }
};

int main() {
    auto circles = stringToVector2("[[2,2,2],[3,4,1]]");
    auto ans = Solution().countLatticePoints(circles);
    cout << toString(ans) << endl;
    return 0;
}
