/**
 * Author: Deean
 * Date: 2022-09-03 17:20
 * FileName: algorithm/P0461.cpp
 * Description: 461. 汉明距离
 */

#include <iostream>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int temp = x ^ y, cnt = 0;
        while (temp) {
            cnt += temp & 1;
            temp >>= 1;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().hammingDistance(4, 1);
    cout << ans << endl;
    return 0;
}