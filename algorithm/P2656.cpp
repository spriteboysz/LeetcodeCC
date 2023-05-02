/**
 * Author: Deean
 * Date: 2023-05-01 21:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maximizeSum(vector<int> &nums, int k) {
        int maximum = nums[0];
        for (auto num: nums) {
            maximum = max(maximum, num);
        }
        return maximum * k + (k - 1) * k / 2;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    auto ans = Solution().maximizeSum(nums, 3);
    cout << toString(ans) << endl;
    return 0;
}
