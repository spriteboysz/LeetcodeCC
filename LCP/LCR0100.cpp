/**
 * Author: Deean
 * Date: 2023-10-13 22:18
 * FileName: LCP
 * Description: LCR 100. 三角形最小路径和
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minimumTotal(vector <vector<int>> &triangle) {
        int m = triangle.size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < triangle[i].size(); ++j) {
                if (i == 0 && j == 0) {
                    continue;
                } else if (j == 0) {
                    triangle[i][j] += triangle[i - 1][j];
                } else if (j == i) {
                    triangle[i][j] += triangle[i - 1][j - 1];
                } else {
                    triangle[i][j] += min(triangle[i - 1][j], triangle[i - 1][j - 1]);
                }
            }
        }
        return *min_element(triangle[m - 1].begin(), triangle[m - 1].end());
    }
};

int main() {
    vector<int> row1 = {2};
    vector<int> row2 = {3, 4};
    vector<int> row3 = {6, 5, 7};
    vector<int> row4 = {4, 1, 8, 3};
    vector <vector<int>> triangle = {row1, row2, row3, row4};
    auto ans = Solution().minimumTotal(triangle);
    cout << toString(ans) << endl;
    return 0;
}