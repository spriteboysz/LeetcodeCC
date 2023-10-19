/**
 * Author: Deean
 * Date: 2022-09-03 23:36
 * FileName: offer/O0056II.cpp
 * Description: 剑指 Offer 56 - II. 数组中数字出现的次数 II
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        unordered_map<int, int> map;
        for (auto num: nums) {
            map[num]++;
        }
        for (auto pair: map) {
            if (pair.second == 1) return pair.first;
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {9, 1, 7, 9, 7, 9, 7};
    auto ans = Solution().singleNumber(nums);
    cout << ans << endl;
    return 0;
}