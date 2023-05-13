/**
 * Author: Deean
 * Date: 2023-05-12 23:38
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxSum(vector<vector<int>> &grid) {
        int maximum = 0, m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i + 2 >= m || j + 2 >= n) continue;
                int sum = grid[i + 1][j + 1];
                for (int k = 0; k <= 2; ++k) {
                    sum += grid[i][j + k];
                    sum += grid[i + 2][j + k];
                }
                maximum = max(maximum, sum);
            }
        }
        return maximum;
    }
};

int main() {
    auto grid = stringToVector2("[[6,2,1,3],[4,2,1,5],[9,2,8,7],[4,1,2,9]]");
    auto ans = Solution().maxSum(grid);
    cout << toString(ans) << endl;
    return 0;
}
