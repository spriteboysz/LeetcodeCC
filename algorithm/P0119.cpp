/**
 * Author: Deean
 * Date: 2023-05-13 23:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <vector<int>> triangle(rowIndex + 1);
        for (int i = 0; i <= rowIndex; ++i) {
            triangle[i].resize(i + 1);
            triangle[i][0] = triangle[i][i] = 1;
            for (int j = 1; j < i; ++j) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
        return triangle[rowIndex];
    }
};

int main() {
    auto ans = Solution().getRow(5);
    cout << toString(ans) << endl;
    return 0;
}
