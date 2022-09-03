/**
 * Author: Deean
 * Date: 2022-09-03 17:13
 * FileName: algorithm/P1551.cpp
 * Description: 1551. 使数组中所有元素相等的最小操作数
 */

#include <iostream>
#include <vector>
#include <codec.h>

using namespace std;

class Solution {
public:
    int minOperations(int n) {
        int ret = 0;
        for (int i = 0; i < n; ++i) {
            int x = 2 * i + 1;
            if (x > n) ret += x - n;
        }
        return ret;
    }
};

int main() {
    auto ans = Solution().minOperations(6);
    cout << ans << endl;
    return 0;
}