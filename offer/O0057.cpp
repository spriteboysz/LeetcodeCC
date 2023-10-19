/**
 * Author: Deean
 * Date: 2022-09-07 23:08
 * FileName: offer/O0057.cpp
 * Description: 剑指 Offer 57. 和为s的两个数字
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_set<int> set;
        for (auto num: nums) {
            int cur = target - num;
            if (set.count(cur)) {
                return {num, cur};
            } else {
                set.insert(num);
            }
        }
        return {};
    }
};

int main() {
    vector<int> nums = {10, 26, 30, 31, 47, 60};
    auto ans = Solution().twoSum(nums, 40);
    cout << toString(ans) << endl;
    return 0;
}