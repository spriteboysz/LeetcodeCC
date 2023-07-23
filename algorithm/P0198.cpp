/**
 * Author: Deean
 * Date: 2023-07-23 21:44
 * FileName: algorithm
 * Description:198. 打家劫舍
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int rob(vector<int> &nums) {
        int n = nums.size();
        if (nums.empty()) return 0;
        if (n == 1) return nums[0];
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; ++i) {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        return dp[n - 1];
    }
};

int main() {
    vector<int> nums = {2, 7, 9, 3, 1};
    auto ans = Solution().rob(nums);
    cout << toString(ans) << endl;
    return 0;
}
