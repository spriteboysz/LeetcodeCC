/**
 * Author: Deean
 * Date: 2023-04-29 14:36
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int acc = 0, maximum = nums[0];
        for (auto num: nums) {
            acc = max(acc + num, num);
            maximum = max(maximum, acc);
        }
        return maximum;
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    auto ans = Solution().maxSubArray(nums);
    cout << toString(ans) << endl;
    return 0;
}
