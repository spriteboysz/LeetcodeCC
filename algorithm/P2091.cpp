/**
 * Author: Deean
 * Date: 2023-07-18 23:55
 * FileName: algorithm
 * Description:2091. 从数组中移除最大值和最小值
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minimumDeletions(vector<int> &nums) {
        int n = nums.size();
        if (n <= 2) return n;
        int minimum = nums[0], maximum = nums[0], index1 = 0, index2 = 0;
        for (int i = 1; i < n; ++i) {
            if (nums[i] < minimum) {
                minimum = nums[i];
                index1 = i;
            }
            if (nums[i] > maximum) {
                maximum = nums[i];
                index2 = i;
            }
        }
        int min_index = min(index1, index2), max_index = max(index1, index2);
        return min({max_index + 1, n - min_index, min_index + 1 + n - max_index});
    }
};

int main() {
    vector<int> nums = {2, 10, 7, 5, 4, 1, 8, 6};
    auto ans = Solution().minimumDeletions(nums);
    cout << toString(ans) << endl;
    return 0;
}
