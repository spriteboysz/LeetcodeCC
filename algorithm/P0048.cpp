/**
 * Author: Deean
 * Date: 2023-05-09 23:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    void rotate(vector <vector<int>> &matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n / 2; ++j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][n - 1 - j];
                matrix[i][n - 1 - j] = temp;
            }
        }
        cout << toString(matrix) << endl;
    }
};

int main() {
    auto matrix = stringToVector2("[[1,2,3],[4,5,6],[7,8,9]]");
    Solution().rotate(matrix);
    return 0;
}
