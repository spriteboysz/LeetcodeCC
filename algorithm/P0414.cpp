/**
 * Author: Deean
 * Date: 2023-04-26 22:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int thirdMax(vector<int> &nums) {
        unordered_set<int> set;
        for (auto num: nums) {
            set.emplace(num);
        }
        nums.clear();
        for (auto num: set) {
            nums.push_back(num);
        }
        sort(nums.rbegin(), nums.rend());
        return nums.size() < 3 ? nums[0] : nums[2];
    }
};

int main() {
    vector<int> nums = {2, 2, 3, 1};
    auto ans = Solution().thirdMax(nums);
    cout << toString(ans) << endl;
    return 0;
}
