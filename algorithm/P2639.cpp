/**
 * Author: Deean
 * Date: 2023-04-29 19:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> findColumnWidth(vector <vector<int>> &grid) {
        vector<int> width;
        for (int j = 0; j < grid[0].size(); ++j) {
            int maximum = 0;
            for (int i = 0; i < grid.size(); ++i) {
                string ss = to_string(grid[i][j]);
                maximum = ss.size() > maximum ? ss.size() : maximum;
            }
            width.push_back(maximum);
        }
        return width;
    }
};

int main() {
    vector <vector<int>> grid = stringToVector2("[[-15,1,3],[15,7,12],[5,6,-2]]");
    auto ans = Solution().findColumnWidth(grid);
    cout << toString(ans) << endl;
    return 0;
}
