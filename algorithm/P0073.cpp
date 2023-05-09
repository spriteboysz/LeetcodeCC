/**
 * Author: Deean
 * Date: 2023-05-08 23:22
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    void setZeroes(vector <vector<int>> &matrix) {
        unordered_set<int> rows, cols;
        for (int i = 0, n = matrix.size(); i < n; ++i) {
            for (int j = 0, m = matrix[0].size(); j < m; ++j) {
                if (matrix[i][j] == 0) {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for (int i = 0, n = matrix.size(); i < n; ++i) {
            for (int j = 0, m = matrix[0].size(); j < m; ++j) {
                if (rows.count(i) || cols.count(j)) {
                    matrix[i][j] = 0;
                }
            }
        }

        cout << toString(matrix) << endl;
    }
};

int main() {
    auto matrix = stringToVector2("[[0,1,2,0],[3,4,5,2],[1,3,1,5]]");
    Solution().setZeroes(matrix);
    return 0;
}
