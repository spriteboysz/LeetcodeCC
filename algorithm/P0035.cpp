/**
 * Author: Deean
 * Date: 2023-04-29 11:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        int left = 0, right = nums.size() - 1, index = nums.size();
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (target <= nums[mid]) {
                index = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return index;
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 6};
    auto ans = Solution().searchInsert(nums, 5);
    cout << toString(ans) << endl;
    return 0;
}
