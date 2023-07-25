/**
 * Author: Deean
 * Date: 2023-07-23 23:26
 * FileName: algorithm
 * Description:75. 颜色分类
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    void sortColors(vector<int> &nums) {
        int cnt0 = 0, cnt1 = 0, n = nums.size();
        for (auto num: nums) {
            if (num == 0) cnt0++;
            if (num == 1) cnt1++;
        }
        for (int i = 0; i < n; ++i) {
            if (i < cnt0) {
                nums[i] = 0;
            } else if (i < cnt0 + cnt1) {
                nums[i] = 1;
            } else {
                nums[i] = 2;
            }
        }
        cout << toString(nums) << endl;
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    Solution().sortColors(nums);
    return 0;
}
