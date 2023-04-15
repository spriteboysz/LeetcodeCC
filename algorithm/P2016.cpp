/**
 * Author: Deean
 * Date: 2023-04-15 16:21
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maximumDifference(vector<int> &nums) {
        int maximum = -1;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                maximum = max(maximum, nums[j] - nums[i]);
            }
        }
        return maximum == 0 ? -1 : maximum;
    }
};

int main() {
    vector<int> nums = {7, 1, 5, 4};
    auto ans = Solution().maximumDifference(nums);
    cout << toString(ans) << endl;
    return 0;
}
