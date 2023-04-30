/**
 * Author: Deean
 * Date: 2023-04-29 22:34
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int massage(vector<int> &nums) {
        int n = nums.size();
        if (n == 0) return 0;
        vector<int> dp(n + 2, 0);
        for (int i = n - 1; i >= 0; --i) {
            dp[i] = max(nums[i] + dp[i + 2], dp[i + 1]);
        }
        return dp[0];
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 1};
    auto ans = Solution().massage(nums);
    cout << toString(ans) << endl;
    return 0;
}
