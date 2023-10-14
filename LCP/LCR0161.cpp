/**
 * Author: Deean
 * Date: 2023-10-14 13:52
 * FileName: LCP
 * Description: LCR 161. 连续天数的最高销售额
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxSales(vector<int> &nums) {
        int acc = 0, maximum = nums[0];
        for (auto num: nums) {
            acc = max(acc + num, num);
            maximum = max(maximum, acc);
        }
        return maximum;
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    auto ans = Solution().maxSales(nums);
    cout << toString(ans) << endl;
    return 0;
}