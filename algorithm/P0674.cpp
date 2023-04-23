/**
 * Author: Deean
 * Date: 2023-04-23 22:01
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int> &nums) {
        int maximum = 0;
        for (int i = 0, start = 0, n = nums.size(); i < n; ++i) {
            if (i > 0 && nums[i] <= nums[i - 1]) {
                start = i;
            }
            maximum = max(maximum, i - start + 1);
        }
        return maximum;
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 4, 7};
    auto ans = Solution().findLengthOfLCIS(nums);
    cout << toString(ans) << endl;
    return 0;
}
