/**
 * Author: Deean
 * Date: 2023-07-21 22:56
 * FileName: algorithm
 * Description:1314. 矩阵区域和
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> matrixBlockSum(vector <vector<int>> &mat, int k) {
        int m = mat.size(), n = mat[0].size();
        vector <vector<int>> dp(m + 1, vector<int>(n + 1));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                dp[i + 1][j + 1] = dp[i + 1][j] + dp[i][j + 1] + mat[i][j] - dp[i][j];
            }
        }
        vector <vector<int>> mat2(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int r1 = max(i - k, 0), c1 = max(j - k, 0);
                int r2 = min(i + k + 1, m), c2 = min(j + k + 1, n);
                mat2[i][j] = dp[r2][c2] - dp[r2][c1] - dp[r1][c2] + dp[r1][c1];
            }
        }
        return mat2;
    }
};

int main() {
    auto mat = stringToVector2("[[1,2,3],[4,5,6],[7,8,9]]");
    auto ans = Solution().matrixBlockSum(mat, 1);
    cout << toString(ans) << endl;
    return 0;
}
