/**
 * Author: Deean
 * Date: 2022-09-02 23:27
 * FileName: algorithm/P2220.cpp
 * Description: 2220. 转换数字的最少位翻转次数
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0, cur = start ^ goal;
        while (cur) {
            count += cur & 1;
            cur >>= 1;
        }
        return count;
        // return __builtin_popcount(start ^ goal);
    }
};

int main() {
    auto ans = Solution().minBitFlips(3, 4);
    cout << ans << endl;
    return 0;
}