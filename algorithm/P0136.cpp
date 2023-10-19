/**
 * Author: Deean
 * Date: 2022-09-04 22:24
 * FileName: algorithm/P0136.cpp
 * Description: 136. 只出现一次的数字
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        int ret = 0;
        for (auto &num: nums) {
            ret ^= num;
        }
        return ret;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    auto ans = Solution().singleNumber(nums);
    cout << ans << endl;
    return 0;
}