/**
 * Author: Deean
 * Date: 2022-09-04 22:28
 * FileName: offer/OII0004.cpp
 * Description: 剑指 Offer II 004. 只出现一次的数字
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        unordered_map<int, int> map;
        for (auto &num: nums) map[num]++;
        int ret = 0;
        for (auto pair: map) {
            if (pair.second == 1) {
                ret = pair.first;
                break;
            }
        }
        return ret;
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 1, 0, 1, 100};
    auto ans = Solution().singleNumber(nums);
    cout << ans << endl;
    return 0;
}