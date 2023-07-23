/**
 * Author: Deean
 * Date: 2023-07-22 23:08
 * FileName: algorithm
 * Description:883. 三维形体投影面积
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int projectionArea(vector <vector<int>> &grid) {
        int area = 0, n = grid.size();
        vector<int> rows(n, 0), cols(n, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] != 0) {
                    area++;
                }
                rows[i] = max(rows[i], grid[i][j]);
                cols[j] = max(cols[j], grid[i][j]);
            }
        }
        for (int i = 0; i < n; ++i) {
            area += rows[i] + cols[i];
        }
        return area;
    }
};

int main() {
    auto grid = stringToVector2("[[1,2],[3,4]]");
    auto ans = Solution().projectionArea(grid);
    cout << toString(ans) << endl;
    return 0;
}
