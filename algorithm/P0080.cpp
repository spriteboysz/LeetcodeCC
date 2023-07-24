/**
 * Author: Deean
 * Date: 2023-07-23 23:21
 * FileName: algorithm
 * Description:80. 删除有序数组中的重复项 II
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int n = nums.size();
        if (n <= 2) return n;
        int slow = 2, fast = 2;
        while (fast < n) {
            if (nums[slow - 2] != nums[fast]) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    auto ans = Solution().removeDuplicates(nums);
    cout << toString(ans) << endl;
    return 0;
}
