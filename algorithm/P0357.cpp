/**
 * Author: Deean
 * Date: 2023-07-23 14:57
 * FileName: algorithm
 * Description:357. 统计各位数字都不同的数字个数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        if (n == 1) return 10;
        int cnt = 10, cur = 9;
        for (int i = 0; i < n - 1; ++i) {
            cur *= 9 - i;
            cnt += cur;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().countNumbersWithUniqueDigits(2);
    cout << toString(ans) << endl;
    return 0;
}
