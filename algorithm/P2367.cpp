/**
 * Author: Deean
 * Date: 2022-09-01 23:17
 * FileName: algorithm/P2367.cpp
 * Description: 2367. 算术三元组的数目
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int> &nums, int diff) {
        int count = 0, n = nums.size();
        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    if (nums[j] - nums[i] == diff && nums[k] - nums[j] == diff) count++;
                }
            }
        }
        return count;
    }
};

int main() {
    vector<int> nums = {4, 5, 6, 7, 8, 9};
    auto ans = Solution().arithmeticTriplets(nums, 2);
    cout << ans << endl;
    return 0;
}