/**
 * Author: Deean
 * Date: 2022-09-04 13:58
 * FileName: algorithm/P1572.cpp
 * Description: 1572. 矩阵对角线元素的和
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>> &mat) {
        int n = mat.size(), sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += mat[i][i] + mat[i][n - 1 - i];
        }
        if (n % 2 == 1) sum -= mat[n / 2][n / 2];
        return sum;
    }
};

int main() {
    vector<vector<int>> mat = {{1, 1, 1, 1},
                               {1, 1, 1, 1},
                               {1, 1, 1, 1},
                               {1, 1, 1, 1}};
    auto ans = Solution().diagonalSum(mat);
    cout << ans << endl;
    return 0;
}