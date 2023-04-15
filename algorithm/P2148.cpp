/**
 * Author: Deean
 * Date: 2023-04-15 11:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countElements(vector<int> &nums) {
        int minimum = 1e6, maximum = -1e6;
        for (const auto &num: nums) {
            minimum = min(minimum, num);
            maximum = max(maximum, num);
        }
        int cnt = 0;
        for (const auto &num: nums) {
            if (num != minimum && num != maximum) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> nums = {11, 7, 2, 15};
    auto ans = Solution().countElements(nums);
    cout << toString(ans) << endl;
    return 0;
}
