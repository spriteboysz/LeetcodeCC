/**
 * Author: Deean
 * Date: 2023-07-23 23:44
 * FileName: algorithm
 * Description:27. 移除元素
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int left = 0;
        for (int right = 0, n = nums.size(); right < n; ++right) {
            if (nums[right] != val) {
                nums[left] = nums[right];
                left++;
            }
        }
        return left;
    }
};

int main() {
    vector<int> nums = {3, 2, 2, 3};
    auto ans = Solution().removeElement(nums, 3);
    cout << toString(ans) << endl;
    return 0;
}
