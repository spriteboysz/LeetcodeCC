/**
 * Author: Deean
 * Date: 2023-04-22 15:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int> &nums) {
        int n = nums.size();
        if (n == 1) return true;
        bool flag1 = false, flag2 = false;
        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[i - 1]) {
                flag1 = true;
            }
            if (nums[i] < nums[i - 1]) {
                flag2 = true;
            }
        }
        return !(flag1 && flag2);
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 3};
    auto ans = Solution().isMonotonic(nums);
    cout << toString(ans) << endl;
    return 0;
}
