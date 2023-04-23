/**
 * Author: Deean
 * Date: 2023-04-23 22:32
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int> &nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }
        int maximum = sum;
        for (int i = k, n = nums.size(); i < n; ++i) {
            sum = sum - nums[i - k] + nums[i];
            maximum = max(maximum, sum);
        }
        return maximum * 1.0 / k;
    }
};

int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    auto ans = Solution().findMaxAverage(nums, 4);
    cout << toString(ans) << endl;
    return 0;
}
