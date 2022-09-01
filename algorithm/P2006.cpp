/**
 * Author: Deean
 * Date: 2022-09-01 23:48
 * FileName: algorithm/P2006.cpp
 * Description: 2006. 差的绝对值为 K 的数对数目
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0, n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (abs(nums[i] - nums[j]) == k) count++;
            }
        }
        return count;
    }
};

int main() {
    vector<int> nums = {3,2,1,5,4};
    auto ans = Solution().countKDifference(nums, 2);
    cout << ans << endl;
    return 0;
}