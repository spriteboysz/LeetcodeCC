/**
 * Author: Deean
 * Date: 2022-09-04 14:11
 * FileName: algorithm/P2221.cpp
 * Description: 2221. 数组的三角和
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int triangularSum(vector<int> &nums) {
        int n = nums.size();
        while (n--) {
            for (int i = 0; i < n; ++i) {
                nums[i] = (nums[i] + nums[i + 1]) % 10;
            }
        }
        return nums[0];
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    auto ans = Solution().triangularSum(nums);
    cout << ans << endl;
    return 0;
}