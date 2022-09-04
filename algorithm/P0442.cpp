/**
 * Author: Deean
 * Date: 2022-09-04 21:32
 * FileName: algorithm/P0442.cpp
 * Description: 442. 数组中重复的数据
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int> &nums) {
        vector<int> vec;
        unordered_map<int, int> map;
        for (auto num: nums) map[num]++;
        for (auto pair: map) {
            if (pair.second == 2) vec.push_back(pair.first);
        }
        return vec;
    }
};

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    auto ans = Solution().findDuplicates(nums);
    cout << vectorToString(ans) << endl;
    return 0;
}