/**
 * Author: Deean
 * Date: 2023-04-21 22:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector <vector<int>> grid;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                grid.push_back(vector < int > {i, j});
            }
        }
        sort(grid.begin(), grid.end(), [=](vector<int> &v1, vector<int> &v2) {
            return abs(v1[0] - rCenter) + abs(v1[1] - cCenter) < abs(v2[0] - rCenter) + abs(v2[1] - cCenter);
        });
        return grid;
    }
};

int main() {
    auto ans = Solution().allCellsDistOrder(2, 2, 0, 1);
    cout << toString(ans) << endl;
    return 0;
}
