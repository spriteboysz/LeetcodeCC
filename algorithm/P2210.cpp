/**
 * Author: Deean
 * Date: 2023-07-18 22:56
 * FileName: algorithm
 * Description:2210. 统计数组中峰和谷的数量
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countHillValley(vector<int> &nums) {
        int cnt = 0;
        for (int i = 1, n = nums.size(); i < n - 1; ++i) {
            int j = i + 1;
            for (; j + 1 < n; ++j) {
                if (nums[j] != nums[i]) break;
            }
            if ((nums[i] - nums[i - 1]) * (nums[i] - nums[j]) > 0) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> nums = {2, 4, 1, 1, 6, 5};
    auto ans = Solution().countHillValley(nums);
    cout << toString(ans) << endl;
    return 0;
}
