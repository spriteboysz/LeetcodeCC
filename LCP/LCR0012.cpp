/**
 * Author: Deean
 * Date: 2023-10-11 20:51
 * FileName: LCP
 * Description: LCR 012. 寻找数组的中心下标
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int> &nums) {
        int sum = 0;
        for (auto num: nums) {
            sum += num;
        }
        int acc = 0;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            if (2 * acc + nums[i] == sum) {
                return i;
            }
            acc += nums[i];
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    auto ans = Solution().pivotIndex(nums);
    cout << toString(ans) << endl;
    return 0;
}