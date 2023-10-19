/**
 * Author: Deean
 * Date: 2022-09-04 21:29
 * FileName: algorithm/P2119.cpp
 * Description: 2119. 反转两次的数字
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    bool isSameAfterReversals(int num) {
        if (num == 0) return true;
        return num % 10;
    }
};

int main() {
    auto ans = Solution().isSameAfterReversals(1800);
    cout << ans << endl;
    return 0;
}