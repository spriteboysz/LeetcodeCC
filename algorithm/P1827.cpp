/**
 * Author: Deean
 * Date: 2022-09-08 23:39
 * FileName: algorithm/P1827.cpp
 * Description: 1827. 最少操作使数组递增
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int minOperations(vector<int> &nums) {
        if (nums.size() == 1) return 0;
        int cnt = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] <= nums[i - 1]) {
                int temp = nums[i - 1] + 1 - nums[i];
                cnt += temp;
                nums[i] = nums[i - 1] + 1;
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> nums = {1, 5, 2, 4, 1};
    auto ans = Solution().minOperations(nums);
    cout << toString(ans) << endl;
    return 0;
}