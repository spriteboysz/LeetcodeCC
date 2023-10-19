/**
 * Author: Deean
 * Date: 2022-09-04 21:07
 * FileName: offer/O0015.cpp
 * Description: 剑指 Offer 15. 二进制中1的个数
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while (n) {
            cnt += n & 1;
            n >>= 1;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().hammingWeight(4294967293);
    cout << ans << endl;
    return 0;
}