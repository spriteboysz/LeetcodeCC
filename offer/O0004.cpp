/**
 * Author: Deean
 * Date: 2023-05-16 23:37
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool findNumberIn2DArray(vector <vector<int>> &matrix, int target) {
        if (matrix.size() == 0) return false;
        int m = matrix.size(), n = matrix[0].size();
        int row = m - 1, col = 0;
        while (row >= 0 && col < n) {
            if (matrix[row][col] < target) {
                col++;
            } else if (matrix[row][col] > target) {
                row--;
            } else {
                return true;
            }
        }
        return false;
    }
};

int main() {
    auto matrix = stringToVector2("[[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]]");
    auto ans = Solution().findNumberIn2DArray(matrix, 5);
    cout << toString(ans) << endl;
    return 0;
}
