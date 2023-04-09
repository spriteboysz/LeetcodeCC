/**
 * Author: Deean
 * Date: 2022-10-09 23:09
 * FileName: algorithm/P0001.cpp
 * Description: 1. 两数之和
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = map.find(target - nums[i]);
            if (it != map.end()) {
                return {it->second, i};
            } else {
                map[nums[i]] = i;
            }
        }
        return {};
    }
};

int main() {
    vector<int> nums = stringToVector("[2,7,11,15,31]");
    auto ans = Solution().twoSum(nums, 9);
    cout << toString(ans) << endl;
    return 0;
}