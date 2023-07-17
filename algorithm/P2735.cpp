/**
 * Author: Deean
 * Date: 2023-07-16 22:18
 * FileName: algorithm
 * Description:2735. 收集巧克力
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    long long minCost(vector<int> &nums, int x) {
        int n = nums.size();
        long long sum[n];
        for (int i = 0; i < n; ++i) {
            sum[i] = (long long) i * x;
        }
        for (int i = 0; i < n; ++i) {
            int num = nums[i];
            for (int j = i; j < n + i; ++j) {
                num = min(num, nums[j % n]);
                sum[j - i] += num;
            }
        }
        return *min_element(sum, sum + n);
    }
};

int main() {
    vector<int> nums = {20, 1, 15};
    auto ans = Solution().minCost(nums, 5);
    cout << toString(ans) << endl;
    return 0;
}
