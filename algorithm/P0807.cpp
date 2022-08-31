/**
 * Author: Deean
 * Date: 2022-08-31 21:19
 * FileName: algorithm/P0807.cpp
 * Description: 807. 保持城市天际线
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid) {
        int n = grid.size();
        vector<int> maxRow(n), maxCol(n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                maxRow[i] = max(maxRow[i], grid[i][j]);
                maxCol[j] = max(maxCol[j], grid[i][j]);
            }
        }

        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                count += min(maxRow[i], maxCol[j]) - grid[i][j];
            }
        }
        return count;
    }
};

int main() {
    vector<int> row1 = {8, 4, 8, 7};
    vector<int> row2 = {7, 4, 7, 7};
    vector<int> row3 = {9, 4, 8, 7};
    vector<int> row4 = {3, 3, 3, 3};
    vector<vector<int>> grid = {row1, row2, row3, row4};
    int ans = Solution().maxIncreaseKeepingSkyline(grid);
    cout << ans << endl;
    return 0;
}