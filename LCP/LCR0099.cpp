/**
 * Author: Deean
 * Date: 2023-10-13 22:13
 * FileName: LCP
 * Description: LCR 099. 最小路径和
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minPathSum(vector <vector<int>> &grid) {
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 && j == 0) {
                    continue;
                } else if (i == 0) {
                    grid[i][j] += grid[i][j - 1];
                } else if (j == 0) {
                    grid[i][j] += grid[i - 1][j];
                } else {
                    grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
                }
            }
        }
        return grid[m - 1][n - 1];
    }
};

int main() {
    vector <vector<int>> grid = stringToVector2("[[1,3,1],[1,5,1],[4,2,1]]");
    auto ans = Solution().minPathSum(grid);
    cout << toString(ans) << endl;
    return 0;
}