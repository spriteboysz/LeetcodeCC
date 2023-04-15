/**
 * Author: Deean
 * Date: 2023-04-15 19:16
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minimumDifference(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end());
        int minimum = INT32_MAX;
        for (int i = 0, n = nums.size(); i + k - 1 < n; ++i) {
            minimum = min(minimum, nums[i + k - 1] - nums[i]);
        }
        return minimum;
    }
};

int main() {
    vector<int> nums = {9, 4, 1, 7};
    auto ans = Solution().minimumDifference(nums, 2);
    cout << toString(ans) << endl;
    return 0;
}
