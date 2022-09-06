/**
 * Author: Deean
 * Date: 2022-09-06 23:38
 * FileName: offer/O0003.cpp
 * Description: 剑指 Offer 03. 数组中重复的数字
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int findRepeatNumber(vector<int> &nums) {
        unordered_set<int> set;
        int ret = -1;
        for (auto num: nums) {
            if (set.count(num)) {
                ret = num;
                break;
            } else {
                set.emplace(num);
            }
        }
        return ret;
    }
};

int main() {
    vector<int> nums = {2, 3, 1, 0, 2, 5, 3};
    auto ans = Solution().findRepeatNumber(nums);
    cout << toString(ans) << endl;
    return 0;
}