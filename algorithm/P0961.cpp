/**
 * Author: Deean
 * Date: 2022-09-07 22:12
 * FileName: algorithm/P0961.cpp
 * Description: 961. 在长度 2N 的数组中找出重复 N 次的元素
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int> &nums) {
        unordered_map<int, int> map;
        for (auto num: nums) map[num]++;
        for (auto pair: map) {
            if (pair.second == nums.size() / 2) return pair.first;
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {5, 1, 5, 2, 5, 3, 5, 4};
    auto ans = Solution().repeatedNTimes(nums);
    cout << toString(ans) << endl;
    return 0;
}