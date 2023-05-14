/**
 * Author: Deean
 * Date: 2023-05-13 22:56
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> generate(int numRows) {
        vector <vector<int>> triangle(numRows);
        for (int i = 0; i < numRows; ++i) {
            triangle[i].resize(i + 1);
            triangle[i][0] = triangle[i][i] = 1;
            for (int j = 1; j < i; ++j) {
                triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
            }
        }
        return triangle;
    }
};

int main() {
    auto ans = Solution().generate(5);
    cout << toString(ans) << endl;
    return 0;
}
