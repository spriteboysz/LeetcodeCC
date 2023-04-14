/**
 * Author: Deean
 * Date: 2023-04-14 22:50
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int> &nums) {
        int maximum = -INFINITY, minimum = INFINITY;
        for (auto &num: nums) {
            if (num < 0) {
                maximum = max(maximum, num);
            } else {
                minimum = min(minimum, num);
            }
        }
        if (min(abs(maximum), minimum) == minimum) {
            return minimum;
        } else {
            return maximum;
        }
    }
};

int main() {
    vector<int> nums = {-4, -2, 1, 4, 8};
    auto ans = Solution().findClosestNumber(nums);
    cout << toString(ans) << endl;
    return 0;
}
