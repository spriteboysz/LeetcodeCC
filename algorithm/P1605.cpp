/**
 * Author: Deean
 * Date: 2023-05-10 23:11
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> restoreMatrix(vector<int> &rowSum, vector<int> &colSum) {
        int n = rowSum.size(), m = colSum.size();
        vector <vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0, j = 0; i < n && j < m;) {
            int v = min(rowSum[i], colSum[j]);
            matrix[i][j] = v;
            rowSum[i] -= v;
            colSum[j] -= v;
            if (rowSum[i] == 0) i++;
            if (colSum[j] == 0) j++;
        }
        return matrix;
    }
};

int main() {
    vector<int> rowSum = {3, 8}, colSum = {4, 7};
    auto ans = Solution().restoreMatrix(rowSum, colSum);
    cout << toString(ans) << endl;
    return 0;
}
