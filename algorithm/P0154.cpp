/**
 * Author: Deean
 * Date: 2023-07-23 21:54
 * FileName: algorithm
 * Description:154. 寻找旋转排序数组中的最小值 II
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findMin(vector<int> &nums) {
        int minimum = nums[0];
        for (int i = 1, n = nums.size(); i < n; ++i) {
            minimum = min(minimum, nums[i]);
        }
        return minimum;
    }
};

int main() {
    vector<int> nums = {2, 2, 2, 0, 1};
    auto ans = Solution().findMin(nums);
    cout << toString(ans) << endl;
    return 0;
}
