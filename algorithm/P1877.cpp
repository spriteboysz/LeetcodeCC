/**
 * Author: Deean
 * Date: 2022-09-03 20:06
 * FileName: algorithm/P1877.cpp
 * Description: 1877. 数组中最大数对和的最小值
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minPairSum(vector<int> &nums) {
        int ret = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() / 2; ++i) {
            ret = max(ret, nums[i] + nums[nums.size() - 1 - i]);
        }
        return ret;
    }
};

int main() {
    vector<int> nums = {3, 5, 4, 2, 4, 6};
    auto ans = Solution().minPairSum(nums);
    cout << ans << endl;
    return 0;
}