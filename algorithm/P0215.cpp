/**
 * Author: Deean
 * Date: 2023-07-23 15:58
 * FileName: algorithm
 * Description:215. 数组中的第K个最大元素
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int> &nums, int k) {
        sort(nums.rbegin(), nums.rend());
        return nums[k - 1];
    }
};

int main() {
    vector<int> nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    auto ans = Solution().findKthLargest(nums, 4);
    cout << toString(ans) << endl;
    return 0;
}
