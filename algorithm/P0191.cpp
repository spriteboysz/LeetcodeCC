/**
 * Author: Deean
 * Date: 2022-09-04 21:10
 * FileName: algorithm/P0191.cpp
 * Description: 191. 位1的个数
 */

#include <leetcode.h>

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
    auto ans = Solution().hammingWeight(3);
    cout << ans << endl;
    return 0;
}