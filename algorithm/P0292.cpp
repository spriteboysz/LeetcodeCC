/**
 * Author: Deean
 * Date: 2022-09-07 22:30
 * FileName: algorithm/P0292.cpp
 * Description: 292. Nim 游戏
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};

int main() {
    auto ans = Solution().canWinNim(4);
    cout << toString(ans) << endl;
    ans = Solution().canWinNim(1);
    cout << toString(ans) << endl;
    return 0;
}