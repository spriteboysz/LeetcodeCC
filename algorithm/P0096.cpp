/**
 * Author: Deean
 * Date: 2023-07-14 23:10
 * FileName: algorithm
 * Description:96. 不同的二叉搜索树
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n + 1, 0);
        dp[0] = 1, dp[1] = 1;
        for (int i = 2; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                dp[i] += dp[j - 1] * dp[i - j];
            }
        }
        return dp[n];
    }
};

int main() {
    auto ans = Solution().numTrees(3);
    cout << toString(ans) << endl;
    return 0;
}
