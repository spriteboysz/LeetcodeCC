/**
 * Author: Deean
 * Date: 2022-09-07 23:23
 * FileName: algorithm/P2032.cpp
 * Description: 2032. 至少在两个数组中出现的值
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3) {
        unordered_map<int, int> map;
        for (auto num: nums1) map[num] |= 1;
        for (auto num: nums2) map[num] |= 2;
        for (auto num: nums3) map[num] |= 4;
        vector<int> vec;
        for (auto pair: map) {
            int cur = pair.second;
            if (cur == 3 || cur == 5 || cur == 6 || cur == 7) vec.push_back(pair.first);
        }
        return vec;
    }
};

int main() {
    vector<int> nums1 = {3, 1}, nums2 = {2, 3}, nums3 = {1, 2};
    auto ans = Solution().twoOutOfThree(nums1, nums2, nums3);
    cout << toString(ans) << endl;
    return 0;
}