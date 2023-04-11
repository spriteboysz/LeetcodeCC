/**
 * Author: Deean
 * Date: 2023-04-11 22:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (auto &row: grid) {
            std::sort(row.begin(), row.end());
        }
        int value = 0;
        for (int j = 0; j < grid[0].size(); ++j) {
            int val = 0;
            for (int i = 0; i < grid.size(); ++i) {
                val = max(val, grid[i][j]);
            }
            value += val;
        }
        return value;
    }
};

int main() {
    vector<vector<int>> grid = stringToVector2("[[1,2,4],[3,3,1]]");
    auto ans = Solution().deleteGreatestValue(grid);
    cout << toString(ans) << endl;
    return 0;
}
