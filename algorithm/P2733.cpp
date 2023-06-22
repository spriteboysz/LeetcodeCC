/**
 * Author: Deean
 * Date: 2023-06-22 22:41
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findNonMinOrMax(vector<int> &nums) {
        int minimum = nums[0], maximum = nums[0];
        for (auto num: nums) {
            minimum = min(minimum, num);
            maximum = max(maximum, num);
        }
        for (auto num: nums) {
            if (num != minimum && num != maximum) {
                return num;
            }
        }
        return -1;
    }
};

int main() {
    auto nums = stringToVector("[3,2,1,4]");
    auto ans = Solution().findNonMinOrMax(nums);
    cout << toString(ans) << endl;
    return 0;
}
