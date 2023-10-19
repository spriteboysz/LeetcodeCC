/**
 * Author: Deean
 * Date: 2022-09-09 22:34
 * FileName: algorithm/P1380.cpp
 * Description: 1380. 矩阵中的幸运数
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> minRow(m, INT_MAX), maxCol(n, 0);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                minRow[i] = min(minRow[i], matrix[i][j]);
                maxCol[j] = max(maxCol[j], matrix[i][j]);
            }
        }
        vector<int> vec;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == minRow[i] && matrix[i][j] == maxCol[j]) {
                    vec.push_back(matrix[i][j]);
                }
            }
        }
        return vec;
    }
};

int main() {
    vector<vector<int>> matrix = {{1,  10, 4,  2},
                                  {9,  3,  8,  7},
                                  {15, 16, 17, 12}};
    auto ans = Solution().luckyNumbers(matrix);
    cout << toString(ans) << endl;
    return 0;
}