/**
 * Author: Deean
 * Date: 2022-09-04 15:18
 * FileName: algorithm/P0657.cpp
 * Description: 657. 机器人能否返回原点
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (auto c: moves) {
            if (c == 'U') y++;
            if (c == 'D') y--;
            if (c == 'L') x++;
            if (c == 'R') x--;
        }
        return x == 0 && y == 0;
    }
};

int main() {
    auto ans = Solution().judgeCircle("LLRR");
    cout << ans << endl;
    return 0;
}