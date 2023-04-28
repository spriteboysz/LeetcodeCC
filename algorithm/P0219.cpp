/**
 * Author: Deean
 * Date: 2023-04-28 21:24
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        unordered_set<int> set;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            if (i > k) {
                set.erase(nums[i - k - 1]);
            }
            if (set.count(nums[i])) {
                return true;
            }
            set.emplace(nums[i]);
        }
        return false;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 1};
    auto ans = Solution().containsNearbyDuplicate(nums, 3);
    cout << toString(ans) << endl;
    return 0;
}
