/**
 * Author: Deean
 * Date: 2023-04-12 23:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool findSubarrays(vector<int> &nums) {
        set<int> set;
        for (int i = 1, n = nums.size(); i < n; ++i) {
            int sum = nums[i - 1] + nums[i];
            if (set.count(sum) > 0) {
                return true;
            }
            set.insert(sum);
        }
        return false;
    }
};

int main() {
    vector<int> nums = {4, 2, 4};
    auto ans = Solution().findSubarrays(nums);
    cout << toString(ans) << endl;
    return 0;
}
