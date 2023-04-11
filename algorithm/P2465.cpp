/**
 * Author: Deean
 * Date: 2023-04-11 23:38
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int distinctAverages(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        set<int> avg;
        for (int i = 0, n = nums.size(); i < n / 2; ++i) {
            avg.emplace(nums[i] + nums[n - 1 - i]);
        }
        return avg.size();
    }
};

int main() {
    vector<int> nums = {4, 1, 4, 0, 3, 5};
    auto ans = Solution().distinctAverages(nums);
    cout << toString(ans) << endl;
    return 0;
}
