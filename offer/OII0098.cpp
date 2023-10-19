/**
 * Author: Deean
 * Date: 2022-10-12 22:30
 * FileName: offer/OII0098.cpp
 * Description: 剑指 Offer II 098. 路径的数目
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> grid(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 || j == 0) {
                    grid[i][j] = 1;
                } else {
                    grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
                }
            }
        }
        return grid[m - 1][n - 1];
    }
};

int main() {
    auto ans = Solution().uniquePaths(3, 7);
    cout << toString(ans) << endl;
    return 0;
}