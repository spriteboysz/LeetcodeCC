/**
 * Author: Deean
 * Date: 2022-09-03 21:34
 * FileName: algorithm/P1252.cpp
 * Description: 1252. 奇数值单元格的数目
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>> &indices) {
        vector<vector<int>> matrix(m, vector<int>(n));
        for (auto &index: indices) {
            for (int i = 0; i < m; ++i) matrix[i][index[1]]++;
            for (int j = 0; j < n; ++j) matrix[index[0]][j]++;
        }
        int cnt = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] % 2 == 1) cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    vector<vector<int>> indices = {{1, 1},
                                   {0, 0}};
    auto ans = Solution().oddCells(2, 2, indices);
    cout << ans << endl;
    return 0;
}