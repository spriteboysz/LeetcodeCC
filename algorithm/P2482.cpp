/**
 * Author: Deean
 * Date: 2023-05-10 23:01
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> onesMinusZeros(vector <vector<int>> &grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> row0(m), row1(m), col0(n), col1(n);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]) {
                    row1[i] += 1;
                    col1[j] += 1;
                } else {
                    row0[i] += 1;
                    col0[j] += 1;
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                grid[i][j] = row1[i] + col1[j] - row0[i] - col0[j];
            }
        }
        return grid;
    }
};

int main() {
    auto grid = stringToVector2("[[0,1,1],[1,0,1],[0,0,1]]");
    auto ans = Solution().onesMinusZeros(grid);
    cout << toString(ans) << endl;
    return 0;
}
