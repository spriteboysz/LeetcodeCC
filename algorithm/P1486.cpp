/**
 * Author: Deean
 * Date: 2022-09-02 21:59
 * FileName: algorithm/P1486.cpp
 * Description: 1486. 数组异或操作
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int ret = 0;
        for (int i = 0; i < n; ++i) {
            ret ^= start + 2 * i;
        }
        return ret;
    }
};

int main() {
    auto ans = Solution().xorOperation(4, 3);
    cout << ans << endl;
    return 0;
}