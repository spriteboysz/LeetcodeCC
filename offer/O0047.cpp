/**
 * Author: Deean
 * Date: 2023-05-11 22:55
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxValue(vector <vector<int>> &grid) {
        for (int i = 0, n = grid.size(); i < n; ++i) {
            for (int j = 0, m = grid[0].size(); j < m; ++j) {
                if (i == 0 && j == 0) {
                    continue;
                } else if (i == 0) {
                    grid[i][j] += grid[i][j - 1];
                } else if (j == 0) {
                    grid[i][j] += grid[i - 1][j];
                } else {
                    grid[i][j] += max(grid[i - 1][j], grid[i][j - 1]);
                }
            }
        }
        return grid.back().back();
    }
};

int main() {
    auto grid = stringToVector2("[[1,3,1],[1,5,1],[4,2,1]]");
    auto ans = Solution().maxValue(grid);
    cout << toString(ans) << endl;
    return 0;
}
