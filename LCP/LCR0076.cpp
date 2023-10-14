/**
 * Author: Deean
 * Date: 2023-10-13 22:01
 * FileName: LCP
 * Description: LCR 076. 数组中的第 K 个最大元素
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int> &nums, int k) {
        std::sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};

int main() {
    vector<int> nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    auto ans = Solution().findKthLargest(nums, 4);
    cout << toString(ans) << endl;
    return 0;
}