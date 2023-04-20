/**
 * Author: Deean
 * Date: 2023-04-19 22:59
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countNegatives(vector <vector<int>> &grid) {
        int cnt = 0;
        for (auto row: grid) {
            for (auto num: row) {
                if (num < 0) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    vector <vector<int>> grid = stringToVector2("[[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]");
    auto ans = Solution().countNegatives(grid);
    cout << toString(ans) << endl;
    return 0;
}
