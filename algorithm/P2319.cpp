/**
 * Author: Deean
 * Date: 2022-09-10 13:46
 * FileName: algorithm/P2319.cpp
 * Description: 2319. 判断矩阵是否是一个 X 矩阵
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    bool checkXMatrix(vector<vector<int>> &grid) {
        int n = grid.size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == j || i + j == n - 1) {
                    if (grid[i][j] == 0) return false;
                } else {
                    if (grid[i][j] != 0) return false;
                }
            }
        }
        return true;
    }
};

int main() {
    vector<vector<int>> grid = stringToVector2("[[5,7,0],[0,3,1],[0,5,0]]");
    auto ans = Solution().checkXMatrix(grid);
    cout << toString(ans) << endl;
    return 0;
}