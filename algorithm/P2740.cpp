/**
 * Author: Deean
 * Date: 2023-07-16 22:14
 * FileName: algorithm
 * Description:2740. 找出分区值
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findValueOfPartition(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int minimum = nums[1] - nums[0];
        for (int i = 2, n = nums.size(); i < n; ++i) {
            minimum = min(minimum, nums[i] - nums[i - 1]);
        }
        return minimum;
    }
};

int main() {
    vector<int> nums = {1, 3, 2, 4};
    auto ans = Solution().findValueOfPartition(nums);
    cout << toString(ans) << endl;
    return 0;
}
