/**
 * Author: Deean
 * Date: 2022-09-10 17:01
 * FileName: algorithm/P2180.cpp
 * Description: 2180. 统计各位数字之和为偶数的整数个数
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int countEven(int num) {
        int cnt = 0;
        for (int i = 2; i <= num; ++i) {
            int cur = i, sum = 0;
            while (cur) {
                sum += cur % 10;
                cur /= 10;
            }
            if (sum % 2 == 0) cnt++;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().countEven(30);
    cout << toString(ans) << endl;
    return 0;
}