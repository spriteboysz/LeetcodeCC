/**
 * Author: Deean
 * Date: 2023-04-20 23:11
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool checkStraightLine(vector <vector<int>> &coordinates) {
        int dx = coordinates[0][0], dy = coordinates[0][1];
        for (int i = 0, n = coordinates.size(); i < n; ++i) {
            coordinates[i][0] -= dx;
            coordinates[i][1] -= dy;
        }
        int a = coordinates[1][1], b = -coordinates[1][0];
        for (int i = 2, n = coordinates.size(); i < n; ++i) {
            int x = coordinates[i][0], y = coordinates[i][1];
            if (a * x + b * y != 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    vector <vector<int>> coordinates = stringToVector2("[[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]");
    auto ans = Solution().checkStraightLine(coordinates);
    cout << toString(ans) << endl;
    return 0;
}
