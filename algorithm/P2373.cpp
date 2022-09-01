/**
 * Author: Deean
 * Date: 2022-09-01 23:04
 * FileName: algorithm/P2373.cpp
 * Description: 2373. 矩阵中的局部最大值
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> row;vector<vector<int>> local;
        for (int i = 0; i < n - 2; ++i) {
            row.clear();
            for (int j = 0; j < n - 2; ++j) {
                int count = 0;
                for (int k = 0; k <= 2; ++k) {
                    for (int l = 0; l <= 2; ++l) {
                        count = max(count, grid[i + k][j + l]);
                    }
                }
                row.push_back(count);
            }
            local.push_back(row);
        }
        return local;
    }
};

int main() {
    vector<vector<int>> grid = {{1,1,1,1,1},{1,1,1,1,1},{1,1,2,1,1},{1,1,1,1,1},{1,1,1,1,1}};
    auto ans = Solution().largestLocal(grid);
    for (vector<int> row : ans) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }
    return 0;
}