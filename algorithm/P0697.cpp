/**
 * Author: Deean
 * Date: 2023-04-22 22:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int> &nums) {
        unordered_map<int, int> map;
        int maximum = 0;
        for (auto num: nums) {
            map[num]++;
            maximum = max(maximum, map[num]);
        }
        map.erase(map.begin(), map.end());
        int ans = nums.size(), left = 0, right = 0;
        while (right < nums.size()) {
            map[nums[right]]++;
            while (map[nums[right]] == maximum) {
                ans = min(ans, right - left + 1);
                map[nums[left++]]--;
            }
            right++;
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 3, 1};
    auto ans = Solution().findShortestSubArray(nums);
    cout << toString(ans) << endl;
    return 0;
}
