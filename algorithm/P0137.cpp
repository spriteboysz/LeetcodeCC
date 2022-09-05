/**
 * Author: Deean
 * Date: 2022-09-04 22:31
 * FileName: algorithm/P0137.cpp
 * Description: 137. 只出现一次的数字 II
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
    vector<int> nums = {0, 1, 0, 1, 0, 1, 99};
    auto ans = Solution().singleNumber(nums);
    cout << ans << endl;
    return 0;
}