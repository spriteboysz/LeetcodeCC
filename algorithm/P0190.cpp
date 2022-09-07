/**
 * Author: Deean
 * Date: 2022-09-07 21:34
 * FileName: algorithm/P0190.cpp
 * Description: 190. 颠倒二进制位
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0;
        for (int i = 0; i < 32 && n > 0; ++i) {
            rev |= (n & 1) << (31 - i);
            n >>= 1;
        }
        return rev;
    }
};

int main() {
    auto ans = Solution().reverseBits(3221225471);
    cout << ans << endl;
    return 0;
}