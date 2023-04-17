/**
 * Author: Deean
 * Date: 2023-04-16 20:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool check(vector<int> &nums) {
        int n = nums.size(), x = 0;
        for (int i = 1; i < n; ++i) {
            if (nums[i - 1] > nums[i]) {
                x = i;
                break;
            }
        }
        if (x == 0) return true;
        for (int i = x + 1; i < n; ++i) {
            if (nums[i - 1] > nums[i]) {
                return false;
            }
        }
        return nums[0] >= nums[n - 1];
    }
};

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};
    auto ans = Solution().check(nums);
    cout << toString(ans) << endl;
    return 0;
}
