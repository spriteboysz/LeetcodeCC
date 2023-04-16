/**
 * Author: Deean
 * Date: 2023-04-16 16:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int> &nums) {
        int maximum = 0;
        for (int pos = 0, n = nums.size(); pos < n;) {
            int sum = nums[pos++];
            while (pos < n && nums[pos] > nums[pos - 1]) {
                sum += nums[pos++];
            }
            maximum = max(maximum, sum);
        }
        return maximum;
    }
};

int main() {
    vector<int> nums = {10, 20, 30, 5, 10, 50};
    auto ans = Solution().maxAscendingSum(nums);
    cout << toString(ans) << endl;
    return 0;
}
