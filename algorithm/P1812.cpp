/**
 * Author: Deean
 * Date: 2022-09-04 17:19
 * FileName: algorithm/P1812.cpp
 * Description: 1812. 判断国际象棋棋盘中一个格子的颜色
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return (coordinates[0] - 'a' + coordinates[1] - '1') % 2;
    }
};

int main() {
    auto ans = Solution().squareIsWhite("h3");
    cout << ans << endl;
    return 0;
}