/**
 * Author: Deean
 * Date: 2023-10-13 22:53
 * FileName: LCP
 * Description: LCR 127. 跳跃训练
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int trainWays(int num) {
        int a = 1, b = 1, sum;
        for (int i = 0; i < num; i++) {
            sum = (a + b) % 1000000007;
            a = b;
            b = sum;
        }
        return a;
    }
};

int main() {
    auto ans = Solution().trainWays(5);
    cout << toString(ans) << endl;
    return 0;
}