/**
 * Author: Deean
 * Date: 2023-10-13 22:51
 * FileName: LCP
 * Description: LCR 126. 斐波那契数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int fib(int n) {
        int MOD = 1000000007;
        if (n < 2) {
            return n;
        }
        int p = 0, q = 0, r = 1;
        for (int i = 2; i <= n; ++i) {
            p = q;
            q = r;
            r = (p + q) % MOD;
        }
        return r;
    }
};

int main() {
    auto ans = Solution().fib(4);
    cout << toString(ans) << endl;
    return 0;
}