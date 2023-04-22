/**
 * Author: Deean
 * Date: 2023-04-22 15:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int smallestRangeI(vector<int> &nums, int k) {
        int maximum = nums[0], minimum = nums[0];
        for (auto num: nums) {
            maximum = max(maximum, num);
            minimum = min(minimum, num);
        }
        return max(0, maximum - minimum - 2 * k);
    }
};

int main() {
    vector<int> nums = {0, 10};
    auto ans = Solution().smallestRangeI(nums, 2);
    cout << toString(ans) << endl;
    return 0;
}
