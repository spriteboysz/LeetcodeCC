/**
 * Author: Deean
 * Date: 2022-10-11 22:48
 * FileName: algorithm/P0598.cpp
 * Description: 598. 范围求和 II
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>> &ops) {
        int min_row = m, min_col = n;
        for (const auto op: ops) {
            min_row = min(min_row, op[0]);
            min_col = min(min_col, op[1]);
        }
        return min_row * min_col;
    }
};

int main() {
    vector<vector<int>> ops = stringToVector2(
            "[[2,2],[3,3],[3,3],[3,3],[2,2],[3,3],[3,3],[3,3],[2,2],[3,3],[3,3],[3,3]]");
    auto ans = Solution().maxCount(3, 3, ops);
    cout << toString(ans) << endl;
    return 0;
}