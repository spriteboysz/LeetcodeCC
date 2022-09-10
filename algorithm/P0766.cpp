/**
 * Author: Deean
 * Date: 2022-09-10 14:31
 * FileName: algorithm/P0766.cpp
 * Description: 766. 托普利茨矩阵
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>> &matrix) {
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (matrix[i][j] != matrix[i - 1][j - 1]) return false;
            }
        }
        return true;
    }
};

int main() {
    vector<vector<int>> matrix = stringToVector2("[[1,2,3,4],[5,1,2,3],[9,5,1,2]]");
    auto ans = Solution().isToeplitzMatrix(matrix);
    cout << toString(ans) << endl;
    matrix = stringToVector2("[[1,2],[2,2]]");
    ans = Solution().isToeplitzMatrix(matrix);
    cout << toString(ans) << endl;
    return 0;
}