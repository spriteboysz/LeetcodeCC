/**
 * Author: Deean
 * Date: 2023-07-15 22:08
 * FileName: algorithm
 * Description:120. 三角形最小路径和
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minimumTotal(vector <vector<int>> &triangle) {
        int n = triangle.size();
        for (int i = 1; i < n; i++) {
            triangle[i][0] += triangle[i - 1][0];
            for (int j = 1; j < i; j++) {
                triangle[i][j] += min(triangle[i - 1][j], triangle[i - 1][j - 1]);
            }
            triangle[i][i] += triangle[i - 1][i - 1];
        }
        int minimum = triangle[n - 1][0];
        for (int i = 1; i < triangle[n - 1].size(); ++i) {
            minimum = min(minimum, triangle[n - 1][i]);
        }
        return minimum;
    }
};

int main() {
    auto triangle = stringToVector2("[[2],[3,4],[6,5,7],[4,1,8,3]]");
    auto ans = Solution().minimumTotal(triangle);
    cout << toString(ans) << endl;
    return 0;
}
