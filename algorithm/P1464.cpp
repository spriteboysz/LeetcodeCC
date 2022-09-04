/**
 * Author: Deean
 * Date: 2022-09-04 14:57
 * FileName: algorithm/P1464.cpp
 * Description: 1464. 数组中两元素的最大乘积
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int> &nums) {
        int maximum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                maximum = max(maximum, (nums[i] - 1) * (nums[j] - 1));
            }
        }
        return maximum;
    }
};

int main() {
    vector<int> nums = {1, 5, 4, 5};
    auto ans = Solution().maxProduct(nums);
    cout << ans << endl;
    return 0;
}