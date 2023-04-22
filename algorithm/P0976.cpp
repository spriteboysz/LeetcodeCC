/**
 * Author: Deean
 * Date: 2023-04-22 14:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int> &nums) {
        sort(nums.begin(), nums.end(), greater());
        int maximum = 0;
        for (int i = 2, n = nums.size(); i < n; ++i) {
            if (nums[i - 2] < nums[i - 1] + nums[i]) {
                maximum = max(maximum, nums[i - 2] + nums[i - 1] + nums[i]);
            }
        }
        return maximum;
    }
};

int main() {
    vector<int> nums = {2, 1, 2};
    auto ans = Solution().largestPerimeter(nums);
    cout << toString(ans) << endl;
    return 0;
}
