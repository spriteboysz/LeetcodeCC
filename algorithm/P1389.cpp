/**
 * Author: Deean
 * Date: 2023-07-20 23:41
 * FileName: algorithm
 * Description:1389. 按既定顺序创建目标数组
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index) {
        vector<int> nums2;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            nums2.insert(nums2.begin() + index[i], nums[i]);
        }
        return nums2;
    }
};

int main() {
    vector<int> nums = {0, 1, 2, 3, 4};
    vector<int> index = {0, 1, 2, 2, 1};
    auto ans = Solution().createTargetArray(nums, index);
    cout << toString(ans) << endl;
    return 0;
}
