/**
 * Author: Deean
 * Date: 2023-04-20 23:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> shiftGrid(vector <vector<int>> &grid, int k) {
        int n = grid.size(), m = grid[0].size();
        vector <vector<int>> shift(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int index = (i * m + j + k) % (m * n);
                shift[index / m][index % m] = grid[i][j];
            }
        }
        return shift;
    }
};

int main() {
    vector <vector<int>> grid = stringToVector2("[[1,2,3],[4,5,6],[7,8,9]]");
    auto ans = Solution().shiftGrid(grid, 1);
    cout << toString(ans) << endl;
    return 0;
}
