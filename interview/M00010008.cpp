/**
 * Author: Deean
 * Date: 2023-06-23 18:54
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    void setZeroes(vector <vector<int>> &matrix) {
        unordered_set<int> rows, cols;
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                if (matrix[i][j] == 0) {
                    rows.emplace(i);
                    cols.emplace(j);
                }
            }
        }
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                if (rows.count(i) == 1 || cols.count(j) == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
        cout << vector2ToString(matrix);
    }
};

int main() {
    auto matrix = stringToVector2("[[1,1,1],[1,0,1],[1,1,1]]");
    Solution().setZeroes(matrix);
    return 0;
}
