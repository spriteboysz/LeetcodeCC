/**
 * Author: Deean
 * Date: 2022-09-06 23:50
 * FileName: algorithm/P0867.cpp
 * Description: 867. 转置矩阵
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> transposed(n, vector<int>(m));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                transposed[j][i] = matrix[i][j];
            }
        }
        return transposed;
    }
};

int main() {
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6}};
    auto ans = Solution().transpose(matrix);
    cout << toString(ans) << endl;
    return 0;
}